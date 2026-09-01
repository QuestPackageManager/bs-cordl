#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SwapCollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SwapCollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template <typename TValue>
inline bool UnityEngine::Rendering::SwapCollectionExtensions::TrySwap(::System::Collections::Generic::IList_1<TValue>* list, int32_t from, int32_t to, ::by_ref<::System::Exception*> error) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SwapCollectionExtensions*>(),
                                                                                              { "TrySwap",
                                                                                                { ::i2c::class_of<TValue>() },
                                                                                                { ::i2c::type_of<::System::Collections::Generic::IList_1<TValue>*>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, from, to, error);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SwapCollectionExtensions::SwapCollectionExtensions() {}
