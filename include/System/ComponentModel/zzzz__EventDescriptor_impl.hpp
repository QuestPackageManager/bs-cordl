#pragma once
// IWYU pragma private; include "System\ComponentModel\EventDescriptor.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventDescriptor::*)(::StringW, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c0808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::EventDescriptor::_ctor(::StringW name, ::ArrayW<::System::Attribute*> attrs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptor::New_ctor(::StringW name, ::ArrayW<::System::Attribute*> attrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EventDescriptor*>(name, attrs));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventDescriptor::EventDescriptor() {}
