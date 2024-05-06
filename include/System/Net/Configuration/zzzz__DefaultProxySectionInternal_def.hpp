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
// CS Name: ::System.Net.Configuration::DefaultProxySectionInternal*
class CORDL_TYPE DefaultProxySectionInternal : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_WebProxy))::System::Net::IWebProxy* WebProxy;

  /// @brief Field classSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_classSyncObject, put = setStaticF_classSyncObject))::System::Object* classSyncObject;

  /// @brief Field webProxy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_webProxy, put = __cordl_internal_set_webProxy))::System::Net::IWebProxy* webProxy;

  /// @brief Method GetDefaultProxy_UsingOldMonoCode, addr 0x3026d38, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode();

  /// @brief Method GetSection, addr 0x3026de8, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Net::Configuration::DefaultProxySectionInternal* GetSection();

  /// @brief Method GetSystemWebProxy, addr 0x3026d40, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* GetSystemWebProxy();

  static inline ::System::Net::Configuration::DefaultProxySectionInternal* New_ctor();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get_webProxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get_webProxy() const;

  constexpr void __cordl_internal_set_webProxy(::System::Net::IWebProxy* value);

  /// @brief Method .ctor, addr 0x3026efc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_classSyncObject();

  /// @brief Method get_ClassSyncObject, addr 0x3026d48, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Object* get_ClassSyncObject();

  /// @brief Method get_WebProxy, addr 0x3026f04, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field webProxy, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___webProxy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::DefaultProxySectionInternal, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::DefaultProxySectionInternal, ___webProxy) == 0x10, "Offset mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::DefaultProxySectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::DefaultProxySectionInternal*, "System.Net.Configuration", "DefaultProxySectionInternal");
