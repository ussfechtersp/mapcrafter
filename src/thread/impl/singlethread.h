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

#ifndef SINGLETHREAD_H_
#define SINGLETHREAD_H_

#include "../dispatcher.h"
#include "../../renderer/tilerenderworker.h"

namespace mapcrafter {
namespace thread {

class SingleThreadDispatcher : public Dispatcher {
public:
	SingleThreadDispatcher();
	virtual ~SingleThreadDispatcher();

	virtual void dispatch(const renderer::RenderContext& context,
			std::shared_ptr<util::IProgressHandler> progress);
};

} /* namespace thread */
} /* namespace mapcrafter */

#endif /* SINGLETHREAD_H_ */
