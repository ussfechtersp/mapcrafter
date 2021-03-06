/*
 * Copyright 2012-2014 Moritz Hilscher
 *
 * This file is part of mapcrafter.
 *
 * mapcrafter is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * mapcrafter is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mapcrafter.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RENDER_WORK_H_
#define RENDER_WORK_H_

#include "../config/mapcrafter_config.h"
#include "../mc/world.h"
#include "../renderer/blockimages.h"
#include "../renderer/tileset.h"

#include <boost/filesystem.hpp>
#include <memory> // shared_ptr

namespace fs = boost::filesystem;

namespace mapcrafter {
namespace thread {

struct RenderWorkContext {
	fs::path output_dir;
	config::MapSection map_config;
	std::shared_ptr<renderer::BlockImages> block_images;

	mc::World world;
	std::shared_ptr<renderer::TileSet> tile_set;
};

struct RenderWork {
	renderer::TilePath tile_path;
	bool skip_childs;
};

struct RenderWorkResult {
	renderer::TilePath tile_path;
	int tiles_rendered;
};

} /* namespace thread */
} /* namespace mapcrafter */

#endif /* RENDER_WORK_H_ */
