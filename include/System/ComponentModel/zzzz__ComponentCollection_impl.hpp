#pragma once
// IWYU pragma private; include "System/ComponentModel/ComponentCollection.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::ComponentCollection::*)(::StringW)>(
    &::System::ComponentModel::ComponentCollection::get_Item)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x63ae378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ComponentCollection*>(), { ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(), 11 }));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::IComponent* System::ComponentModel::ComponentCollection::get_Item(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ComponentCollection*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComponentCollection::ComponentCollection() {}
