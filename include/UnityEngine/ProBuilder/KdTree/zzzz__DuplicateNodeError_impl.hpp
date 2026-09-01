#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\KdTree\DuplicateNodeError.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__DuplicateNodeError_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::*)()>(&::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66a9edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::KdTree::DuplicateNodeError::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError* UnityEngine::ProBuilder::KdTree::DuplicateNodeError::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::DuplicateNodeError() {}
