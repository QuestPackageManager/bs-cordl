#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BGLib/DotnetExtension/Disposables/CompositeDisposable.hpp"
#include "BGLib/DotnetExtension/Disposables/ConcurrentCompositeDisposable.hpp"
#include "BGLib/DotnetExtension/Disposables/DisposableExtensions.hpp"
#include "BGLib/DotnetExtension/Disposables/EmptyDisposable.hpp"
#include "BGLib/DotnetExtension/Disposables/SingleDisposable.hpp"
#ifdef __cpp_modules
export module Disposables;
#endif
