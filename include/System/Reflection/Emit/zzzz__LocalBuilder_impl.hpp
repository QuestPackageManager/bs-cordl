#pragma once
// IWYU pragma private; include "System/Reflection/Emit/LocalBuilder.hpp"
#include "System/Reflection/zzzz__LocalVariableInfo_impl.hpp"
#include "System/Reflection/Emit/zzzz__LocalBuilder_def.hpp"
#include "System/Reflection/Emit/zzzz__ILGenerator_def.hpp"
constexpr ::StringW& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void System::Reflection::Emit::LocalBuilder::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::Emit::ILGenerator*& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_ilgen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ilgen;
}
constexpr ::System::Reflection::Emit::ILGenerator* const& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_ilgen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ilgen;
}
constexpr void System::Reflection::Emit::LocalBuilder::__cordl_internal_set_ilgen(::System::Reflection::Emit::ILGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ilgen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_startOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOffset;
}
constexpr int32_t const& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_startOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOffset;
}
constexpr void System::Reflection::Emit::LocalBuilder::__cordl_internal_set_startOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startOffset = value;
}
constexpr int32_t& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_endOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endOffset;
}
constexpr int32_t const& System::Reflection::Emit::LocalBuilder::__cordl_internal_get_endOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endOffset;
}
constexpr void System::Reflection::Emit::LocalBuilder::__cordl_internal_set_endOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endOffset = value;
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::LocalBuilder::LocalBuilder()   {
}
