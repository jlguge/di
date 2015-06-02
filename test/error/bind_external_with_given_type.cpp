//
// Copyright (c) 2012-2015 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#include "boost/di.hpp"

namespace di = boost::di;

struct i { };
struct impl : i { };

test error_bind_external_with_given_type = [] {
    di::make_injector(
        di::bind<i, impl>().to(impl{})
    );
};

