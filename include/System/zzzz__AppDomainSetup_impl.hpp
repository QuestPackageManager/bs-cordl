#pragma once
// IWYU pragma private; include "System/AppDomainSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppDomainSetup_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::AppDomainSetup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomainSetup::*)()>(&::System::AppDomainSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3dbcb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomainSetup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_application_base() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___application_base;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_application_base() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___application_base;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_application_base(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___application_base)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_application_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___application_name;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_application_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___application_name;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_application_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___application_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_cache_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache_path;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_cache_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache_path;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_cache_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cache_path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_configuration_file() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration_file;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_configuration_file() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration_file;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_configuration_file(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___configuration_file)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_dynamic_base() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamic_base;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_dynamic_base() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamic_base;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_dynamic_base(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dynamic_base)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_license_file() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___license_file;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_license_file() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___license_file;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_license_file(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___license_file)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_private_bin_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___private_bin_path;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_private_bin_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___private_bin_path;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_private_bin_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___private_bin_path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_private_bin_path_probe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___private_bin_path_probe;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_private_bin_path_probe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___private_bin_path_probe;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_private_bin_path_probe(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___private_bin_path_probe)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_shadow_copy_directories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadow_copy_directories;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_shadow_copy_directories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadow_copy_directories;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_shadow_copy_directories(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadow_copy_directories)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_shadow_copy_files() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadow_copy_files;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_shadow_copy_files() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadow_copy_files;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_shadow_copy_files(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadow_copy_files)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::AppDomainSetup::__cordl_internal_get_publisher_policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publisher_policy;
}
constexpr bool const& System::AppDomainSetup::__cordl_internal_get_publisher_policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publisher_policy;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_publisher_policy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publisher_policy = value;
}
constexpr bool& System::AppDomainSetup::__cordl_internal_get_path_changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path_changed;
}
constexpr bool const& System::AppDomainSetup::__cordl_internal_get_path_changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path_changed;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_path_changed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___path_changed = value;
}
constexpr int32_t& System::AppDomainSetup::__cordl_internal_get_loader_optimization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loader_optimization;
}
constexpr int32_t const& System::AppDomainSetup::__cordl_internal_get_loader_optimization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loader_optimization;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_loader_optimization(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loader_optimization = value;
}
constexpr bool& System::AppDomainSetup::__cordl_internal_get_disallow_binding_redirects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disallow_binding_redirects;
}
constexpr bool const& System::AppDomainSetup::__cordl_internal_get_disallow_binding_redirects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disallow_binding_redirects;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_disallow_binding_redirects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disallow_binding_redirects = value;
}
constexpr bool& System::AppDomainSetup::__cordl_internal_get_disallow_code_downloads() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disallow_code_downloads;
}
constexpr bool const& System::AppDomainSetup::__cordl_internal_get_disallow_code_downloads() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disallow_code_downloads;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_disallow_code_downloads(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disallow_code_downloads = value;
}
constexpr ::System::Object*& System::AppDomainSetup::__cordl_internal_get__activationArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationArguments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomainSetup::__cordl_internal_get__activationArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationArguments;
}
constexpr void System::AppDomainSetup::__cordl_internal_set__activationArguments(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activationArguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::AppDomainSetup::__cordl_internal_get_domain_initializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_initializer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomainSetup::__cordl_internal_get_domain_initializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_initializer;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_domain_initializer(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___domain_initializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::AppDomainSetup::__cordl_internal_get_application_trust() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___application_trust;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomainSetup::__cordl_internal_get_application_trust() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___application_trust;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_application_trust(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___application_trust)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::AppDomainSetup::__cordl_internal_get_domain_initializer_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_initializer_args;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::AppDomainSetup::__cordl_internal_get_domain_initializer_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_initializer_args;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_domain_initializer_args(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___domain_initializer_args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::AppDomainSetup::__cordl_internal_get_disallow_appbase_probe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disallow_appbase_probe;
}
constexpr bool const& System::AppDomainSetup::__cordl_internal_get_disallow_appbase_probe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disallow_appbase_probe;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_disallow_appbase_probe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disallow_appbase_probe = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::AppDomainSetup::__cordl_internal_get_configuration_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration_bytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::AppDomainSetup::__cordl_internal_get_configuration_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration_bytes;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_configuration_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___configuration_bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::AppDomainSetup::__cordl_internal_get_serialized_non_primitives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialized_non_primitives;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::AppDomainSetup::__cordl_internal_get_serialized_non_primitives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialized_non_primitives;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_serialized_non_primitives(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialized_non_primitives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_manager_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager_assembly;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_manager_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager_assembly;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_manager_assembly(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___manager_assembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get_manager_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager_type;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get_manager_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager_type;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_manager_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___manager_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::AppDomainSetup::__cordl_internal_get_partial_visible_assemblies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial_visible_assemblies;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::AppDomainSetup::__cordl_internal_get_partial_visible_assemblies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial_visible_assemblies;
}
constexpr void System::AppDomainSetup::__cordl_internal_set_partial_visible_assemblies(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partial_visible_assemblies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::AppDomainSetup::__cordl_internal_get__TargetFrameworkName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetFrameworkName_k__BackingField;
}
constexpr ::StringW const& System::AppDomainSetup::__cordl_internal_get__TargetFrameworkName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetFrameworkName_k__BackingField;
}
constexpr void System::AppDomainSetup::__cordl_internal_set__TargetFrameworkName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TargetFrameworkName_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::AppDomainSetup* System::AppDomainSetup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::AppDomainSetup*>());
}
inline void System::AppDomainSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomainSetup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::AppDomainSetup::AppDomainSetup() {}
