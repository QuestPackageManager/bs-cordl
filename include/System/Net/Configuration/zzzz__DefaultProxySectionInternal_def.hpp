#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultProxySectionInternal)
namespace System::Net {
class IWebProxy;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class DefaultProxySectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::DefaultProxySectionInternal);
// Type: System.Net.Configuration::DefaultProxySectionInternal
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9312))
// CS Name: ::System.Net.Configuration::DefaultProxySectionInternal*
class CORDL_TYPE DefaultProxySectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field webProxy, offset 0x10, size 0x8
  __declspec(property(get = __get_webProxy, put = __set_webProxy))::System::Net::IWebProxy* webProxy;

  /// @brief Field classSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_classSyncObject, put = setStaticF_classSyncObject))::System::Object* classSyncObject;

  __declspec(property(get = get_WebProxy))::System::Net::IWebProxy* WebProxy;

  constexpr ::System::Net::IWebProxy*& __get_webProxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __get_webProxy() const;

  constexpr void __set_webProxy(::System::Net::IWebProxy* value);

  static inline void setStaticF_classSyncObject(::System::Object* value);

  static inline ::System::Object* getStaticF_classSyncObject();

  /// @brief Method GetDefaultProxy_UsingOldMonoCode addr 0x29f0bdc size 0x8 virtual false final false
  static inline ::System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode();

  /// @brief Method GetSystemWebProxy addr 0x29f0be4 size 0x8 virtual false final false
  static inline ::System::Net::IWebProxy* GetSystemWebProxy();

  /// @brief Method get_ClassSyncObject addr 0x29f0bec size 0xa0 virtual false final false
  static inline ::System::Object* get_ClassSyncObject();

  /// @brief Method GetSection addr 0x29f0c8c size 0x114 virtual false final false
  static inline ::System::Net::Configuration::DefaultProxySectionInternal* GetSection();

  /// @brief Method get_WebProxy addr 0x29f0da8 size 0x8 virtual false final false
  inline ::System::Net::IWebProxy* get_WebProxy();

  static inline ::System::Net::Configuration::DefaultProxySectionInternal* New_ctor();

  /// @brief Method .ctor addr 0x29f0da0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultProxySectionInternal(DefaultProxySectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultProxySectionInternal(DefaultProxySectionInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultProxySectionInternal();

public:
  /// @brief Field webProxy, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___webProxy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::DefaultProxySectionInternal, 0x18>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::DefaultProxySectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::DefaultProxySectionInternal*, "System.Net.Configuration", "DefaultProxySectionInternal");
