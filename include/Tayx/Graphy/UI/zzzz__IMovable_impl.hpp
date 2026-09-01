#pragma once
// IWYU pragma private; include "Tayx\Graphy\UI\IMovable.hpp"
#include "Tayx/Graphy/UI/zzzz__IMovable_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::UI::IMovable.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::UI::IMovable::*)(::Tayx::Graphy::GraphyManager_ModulePosition)>(&::Tayx::Graphy::UI::IMovable::SetPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tayx::Graphy::UI::IMovable*>(), { ::i2c::class_of<::Tayx::Graphy::UI::IMovable*>(), 0 }));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::UI::IMovable::SetPosition(::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tayx::Graphy::UI::IMovable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newModulePosition);
}
