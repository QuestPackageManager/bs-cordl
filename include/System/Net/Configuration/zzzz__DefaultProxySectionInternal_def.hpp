#pragma once
// IWYU pragma private; include "System/Net/Configuration/DefaultProxySectionInternal.hpp"
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
// Dependencies System.Object
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.DefaultProxySectionInternal
class CORDL_TYPE DefaultProxySectionInternal : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_WebProxy)) ::System::Net::IWebProxy* WebProxy;

  /// @brief Field classSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_classSyncObject, put = setStaticF_classSyncObject)) ::System::Object* classSyncObject;

  /// @brief Field webProxy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_webProxy, put = __cordl_internal_set_webProxy)) ::System::Net::IWebProxy* webProxy;

  /// @brief Method GetDefaultProxy_UsingOldMonoCode, addr 0x43fc3a8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode();

  /// @brief Method GetSection, addr 0x43fc450, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Net::Configuration::DefaultProxySectionInternal* GetSection();

  /// @brief Method GetSystemWebProxy, addr 0x43fc3b0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* GetSystemWebProxy();

  static inline ::System::Net::Configuration::DefaultProxySectionInternal* New_ctor();

  constexpr ::System::Net::IWebProxy* const& __cordl_internal_get_webProxy() const;

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get_webProxy();

  constexpr void __cordl_internal_set_webProxy(::System::Net::IWebProxy* value);

  /// @brief Method .ctor, addr 0x43fc560, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_classSyncObject();

  /// @brief Method get_ClassSyncObject, addr 0x43fc3b8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Object* get_ClassSyncObject();

  /// @brief Method get_WebProxy, addr 0x43fc568, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::IWebProxy* get_WebProxy();

  static inline void setStaticF_classSyncObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultProxySectionInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultProxySectionInternal(DefaultProxySectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultProxySectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultProxySectionInternal(DefaultProxySectionInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9833 };

  /// @brief Field webProxy, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___webProxy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Configuration::DefaultProxySectionInternal, ___webProxy) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::DefaultProxySectionInternal, 0x18>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::DefaultProxySectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::DefaultProxySectionInternal*, "System.Net.Configuration", "DefaultProxySectionInternal");
