#pragma once
// IWYU pragma private; include "System/Resources/FileBasedResourceGroveler.hpp"
#include "System/Resources/zzzz__IResourceGroveler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__FileBasedResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Resources::FileBasedResourceGroveler::*)(::System::Resources::ResourceManager_ResourceManagerMediator*)>(&::System::Resources::FileBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d219bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager_ResourceManagerMediator*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& System::Resources::FileBasedResourceGroveler::__cordl_internal_get__mediator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& System::Resources::FileBasedResourceGroveler::__cordl_internal_get__mediator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediator;
}
constexpr void System::Resources::FileBasedResourceGroveler::__cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::FileBasedResourceGroveler::_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager_ResourceManagerMediator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mediator);
}
inline ::System::Resources::FileBasedResourceGroveler* System::Resources::FileBasedResourceGroveler::New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::FileBasedResourceGroveler*>(mediator));
}
/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr System::Resources::FileBasedResourceGroveler::operator ::System::Resources::IResourceGroveler*() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Resources::IResourceGroveler"
constexpr ::System::Resources::IResourceGroveler* System::Resources::FileBasedResourceGroveler::i___System__Resources__IResourceGroveler() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::FileBasedResourceGroveler::FileBasedResourceGroveler() {}
