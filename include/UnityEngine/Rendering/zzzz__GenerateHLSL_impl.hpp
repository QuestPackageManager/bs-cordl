#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\GenerateHLSL.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PackingRules_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GenerateHLSL_def.hpp"
#include "UnityEngine/Rendering/zzzz__PackingRules_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GenerateHLSL._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GenerateHLSL::*)(::UnityEngine::Rendering::PackingRules, bool, bool, bool, int32_t, bool, bool, bool, int32_t,
                                                                                                        ::StringW)>(&::UnityEngine::Rendering::GenerateHLSL::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67a323c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GenerateHLSL*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::PackingRules>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PackingRules& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_packingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packingRules;
}
constexpr ::UnityEngine::Rendering::PackingRules const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_packingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packingRules;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_packingRules(::UnityEngine::Rendering::PackingRules value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packingRules = value;
}
constexpr bool& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_containsPackedFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containsPackedFields;
}
constexpr bool const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_containsPackedFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containsPackedFields;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_containsPackedFields(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___containsPackedFields = value;
}
constexpr bool& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_needAccessors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needAccessors;
}
constexpr bool const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_needAccessors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needAccessors;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_needAccessors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needAccessors = value;
}
constexpr bool& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_needSetters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needSetters;
}
constexpr bool const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_needSetters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needSetters;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_needSetters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needSetters = value;
}
constexpr bool& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_needParamDebug() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needParamDebug;
}
constexpr bool const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_needParamDebug() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needParamDebug;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_needParamDebug(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needParamDebug = value;
}
constexpr int32_t& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_paramDefinesStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paramDefinesStart;
}
constexpr int32_t const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_paramDefinesStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paramDefinesStart;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_paramDefinesStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paramDefinesStart = value;
}
constexpr bool& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_omitStructDeclaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitStructDeclaration;
}
constexpr bool const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_omitStructDeclaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___omitStructDeclaration;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_omitStructDeclaration(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___omitStructDeclaration = value;
}
constexpr bool& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_generateCBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generateCBuffer;
}
constexpr bool const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_generateCBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generateCBuffer;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_generateCBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generateCBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_constantRegister() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constantRegister;
}
constexpr int32_t const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_constantRegister() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constantRegister;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_constantRegister(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constantRegister = value;
}
constexpr ::StringW& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_sourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourcePath;
}
constexpr ::StringW const& UnityEngine::Rendering::GenerateHLSL::__cordl_internal_get_sourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourcePath;
}
constexpr void UnityEngine::Rendering::GenerateHLSL::__cordl_internal_set_sourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourcePath = value;
}
inline void UnityEngine::Rendering::GenerateHLSL::_ctor(::UnityEngine::Rendering::PackingRules rules, bool needAccessors, bool needSetters, bool needParamDebug, int32_t paramDefinesStart,
                                                        bool omitStructDeclaration, bool containsPackedFields, bool generateCBuffer, int32_t constantRegister, ::StringW sourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GenerateHLSL*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::PackingRules>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rules, needAccessors, needSetters, needParamDebug, paramDefinesStart, omitStructDeclaration, containsPackedFields,
                                                   generateCBuffer, constantRegister, sourcePath);
}
inline ::UnityEngine::Rendering::GenerateHLSL* UnityEngine::Rendering::GenerateHLSL::New_ctor(::UnityEngine::Rendering::PackingRules rules, bool needAccessors, bool needSetters, bool needParamDebug,
                                                                                              int32_t paramDefinesStart, bool omitStructDeclaration, bool containsPackedFields, bool generateCBuffer,
                                                                                              int32_t constantRegister, ::StringW sourcePath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GenerateHLSL*>(rules, needAccessors, needSetters, needParamDebug, paramDefinesStart, omitStructDeclaration,
                                                                                                   containsPackedFields, generateCBuffer, constantRegister, sourcePath));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GenerateHLSL::GenerateHLSL() {}
