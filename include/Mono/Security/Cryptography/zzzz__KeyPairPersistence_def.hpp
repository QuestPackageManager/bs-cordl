#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/KeyPairPersistence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyPairPersistence)
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::KeyPairPersistence);
// Dependencies System.Object
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.KeyPairPersistence
class CORDL_TYPE KeyPairPersistence : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanChange)) bool CanChange;

  __declspec(property(get = get_ContainerName)) ::StringW ContainerName;

  __declspec(property(get = get_Filename)) ::StringW Filename;

  __declspec(property(get = get_KeyValue, put = set_KeyValue)) ::StringW KeyValue;

  __declspec(property(get = get_UseDefaultKeyContainer)) bool UseDefaultKeyContainer;

  __declspec(property(get = get_UseMachineKeyStore)) bool UseMachineKeyStore;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::StringW _container;

  /// @brief Field _filename, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__filename, put = __cordl_internal_set__filename)) ::StringW _filename;

  /// @brief Field _keyvalue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__keyvalue, put = __cordl_internal_set__keyvalue)) ::StringW _keyvalue;

  /// @brief Field _machinePath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__machinePath, put = setStaticF__machinePath)) ::StringW _machinePath;

  /// @brief Field _machinePathExists, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__machinePathExists, put = setStaticF__machinePathExists)) bool _machinePathExists;

  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params)) ::System::Security::Cryptography::CspParameters* _params;

  /// @brief Field _userPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__userPath, put = setStaticF__userPath)) ::StringW _userPath;

  /// @brief Field _userPathExists, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__userPathExists, put = setStaticF__userPathExists)) bool _userPathExists;

  /// @brief Field lockobj, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lockobj, put = setStaticF_lockobj)) ::System::Object* lockobj;

  /// @brief Method CanSecure, addr 0x3c6326c, size 0xa0, virtual false, abstract: false, final false
  static inline bool CanSecure(::StringW path);

  /// @brief Method Copy, addr 0x3c61b1c, size 0x98, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::CspParameters* Copy(::System::Security::Cryptography::CspParameters* p);

  /// @brief Method FromXml, addr 0x3c62a90, size 0x11c, virtual false, abstract: false, final false
  inline void FromXml(::StringW xml);

  /// @brief Method IsMachineProtected, addr 0x3c631c8, size 0x90, virtual false, abstract: false, final false
  static inline bool IsMachineProtected(::StringW path);

  /// @brief Method IsUserProtected, addr 0x3c63138, size 0x90, virtual false, abstract: false, final false
  static inline bool IsUserProtected(::StringW path);

  /// @brief Method Load, addr 0x3c628d8, size 0x1b8, virtual false, abstract: false, final false
  inline bool Load();

  static inline ::Mono::Security::Cryptography::KeyPairPersistence* New_ctor(::System::Security::Cryptography::CspParameters* parameters);

  static inline ::Mono::Security::Cryptography::KeyPairPersistence* New_ctor(::System::Security::Cryptography::CspParameters* parameters, ::StringW keyPair);

  /// @brief Method ProtectMachine, addr 0x3c63004, size 0x90, virtual false, abstract: false, final false
  static inline bool ProtectMachine(::StringW path);

  /// @brief Method ProtectUser, addr 0x3c63094, size 0x90, virtual false, abstract: false, final false
  static inline bool ProtectUser(::StringW path);

  /// @brief Method Remove, addr 0x3c63124, size 0x14, virtual false, abstract: false, final false
  inline void Remove();

  /// @brief Method Save, addr 0x3c62bac, size 0x244, virtual false, abstract: false, final false
  inline void Save();

  /// @brief Method ToXml, addr 0x3c62df0, size 0x214, virtual false, abstract: false, final false
  inline ::StringW ToXml();

  /// @brief Method _CanSecure, addr 0x3c63258, size 0x4, virtual false, abstract: false, final false
  static inline bool _CanSecure(::cordl_internals::Ptr<char16_t> root);

  /// @brief Method _IsMachineProtected, addr 0x3c63268, size 0x4, virtual false, abstract: false, final false
  static inline bool _IsMachineProtected(::cordl_internals::Ptr<char16_t> path);

  /// @brief Method _IsUserProtected, addr 0x3c63264, size 0x4, virtual false, abstract: false, final false
  static inline bool _IsUserProtected(::cordl_internals::Ptr<char16_t> path);

  /// @brief Method _ProtectMachine, addr 0x3c63260, size 0x4, virtual false, abstract: false, final false
  static inline bool _ProtectMachine(::cordl_internals::Ptr<char16_t> path);

  /// @brief Method _ProtectUser, addr 0x3c6325c, size 0x4, virtual false, abstract: false, final false
  static inline bool _ProtectUser(::cordl_internals::Ptr<char16_t> path);

  constexpr ::StringW const& __cordl_internal_get__container() const;

  constexpr ::StringW& __cordl_internal_get__container();

  constexpr ::StringW const& __cordl_internal_get__filename() const;

  constexpr ::StringW& __cordl_internal_get__filename();

  constexpr ::StringW const& __cordl_internal_get__keyvalue() const;

  constexpr ::StringW& __cordl_internal_get__keyvalue();

  constexpr ::System::Security::Cryptography::CspParameters* const& __cordl_internal_get__params() const;

  constexpr ::System::Security::Cryptography::CspParameters*& __cordl_internal_get__params();

  constexpr void __cordl_internal_set__container(::StringW value);

  constexpr void __cordl_internal_set__filename(::StringW value);

  constexpr void __cordl_internal_set__keyvalue(::StringW value);

  constexpr void __cordl_internal_set__params(::System::Security::Cryptography::CspParameters* value);

  /// @brief Method .ctor, addr 0x3c61a94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method .ctor, addr 0x3c61a9c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters, ::StringW keyPair);

  static inline ::StringW getStaticF__machinePath();

  static inline bool getStaticF__machinePathExists();

  static inline ::StringW getStaticF__userPath();

  static inline bool getStaticF__userPathExists();

  static inline ::System::Object* getStaticF_lockobj();

  /// @brief Method get_CanChange, addr 0x3c628c8, size 0x10, virtual false, abstract: false, final false
  inline bool get_CanChange();

  /// @brief Method get_ContainerName, addr 0x3c61d44, size 0x100, virtual false, abstract: false, final false
  inline ::StringW get_ContainerName();

  /// @brief Method get_Filename, addr 0x3c61bb4, size 0x190, virtual false, abstract: false, final false
  inline ::StringW get_Filename();

  /// @brief Method get_KeyValue, addr 0x3c628ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KeyValue();

  /// @brief Method get_MachinePath, addr 0x3c61e64, size 0x524, virtual false, abstract: false, final false
  static inline ::StringW get_MachinePath();

  /// @brief Method get_UseDefaultKeyContainer, addr 0x3c6330c, size 0x20, virtual false, abstract: false, final false
  inline bool get_UseDefaultKeyContainer();

  /// @brief Method get_UseMachineKeyStore, addr 0x3c61e44, size 0x20, virtual false, abstract: false, final false
  inline bool get_UseMachineKeyStore();

  /// @brief Method get_UserPath, addr 0x3c62388, size 0x524, virtual false, abstract: false, final false
  static inline ::StringW get_UserPath();

  static inline void setStaticF__machinePath(::StringW value);

  static inline void setStaticF__machinePathExists(bool value);

  static inline void setStaticF__userPath(::StringW value);

  static inline void setStaticF__userPathExists(bool value);

  static inline void setStaticF_lockobj(::System::Object* value);

  /// @brief Method set_KeyValue, addr 0x3c628b4, size 0x14, virtual false, abstract: false, final false
  inline void set_KeyValue(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyPairPersistence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyPairPersistence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyPairPersistence(KeyPairPersistence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyPairPersistence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyPairPersistence(KeyPairPersistence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2276 };

  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::CspParameters* ____params;

  /// @brief Field _keyvalue, offset: 0x18, size: 0x8, def value: None
  ::StringW ____keyvalue;

  /// @brief Field _filename, offset: 0x20, size: 0x8, def value: None
  ::StringW ____filename;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::StringW ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____params) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____keyvalue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____filename) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____container) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::KeyPairPersistence, 0x30>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::KeyPairPersistence);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::KeyPairPersistence*, "Mono.Security.Cryptography", "KeyPairPersistence");
