#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/Extents.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Extents.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::Extents::*)()>(&::UnityEngine::TextCore::Text::Extents::ToString)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6bc3d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Extents>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::Extents>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TextCore::Text::Extents::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::Extents>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::Extents::Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::Extents::Extents() {}
