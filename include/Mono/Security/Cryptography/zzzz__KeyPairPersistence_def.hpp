#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyPairPersistence)
namespace System {
class Object;
}
namespace System::Security::Cryptography {
class CspParameters;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::KeyPairPersistence);
// Type: Mono.Security.Cryptography::KeyPairPersistence
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2276))
// CS Name: ::Mono.Security.Cryptography::KeyPairPersistence*
class CORDL_TYPE KeyPairPersistence : public ::System::Object {
public:
  // Declarations
  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __get__params, put = __set__params))::System::Security::Cryptography::CspParameters* _params;

  /// @brief Field _keyvalue, offset 0x18, size 0x8
  __declspec(property(get = __get__keyvalue, put = __set__keyvalue))::StringW _keyvalue;

  /// @brief Field _filename, offset 0x20, size 0x8
  __declspec(property(get = __get__filename, put = __set__filename))::StringW _filename;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::StringW _container;

  /// @brief Field _userPathExists, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__userPathExists, put = setStaticF__userPathExists)) bool _userPathExists;

  /// @brief Field _userPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__userPath, put = setStaticF__userPath))::StringW _userPath;

  /// @brief Field _machinePathExists, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__machinePathExists, put = setStaticF__machinePathExists)) bool _machinePathExists;

  /// @brief Field _machinePath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__machinePath, put = setStaticF__machinePath))::StringW _machinePath;

  /// @brief Field lockobj, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lockobj, put = setStaticF_lockobj))::System::Object* lockobj;

  __declspec(property(get = get_Filename))::StringW Filename;

  __declspec(property(get = get_KeyValue, put = set_KeyValue))::StringW KeyValue;

  __declspec(property(get = get_CanChange)) bool CanChange;

  __declspec(property(get = get_UseDefaultKeyContainer)) bool UseDefaultKeyContainer;

  __declspec(property(get = get_UseMachineKeyStore)) bool UseMachineKeyStore;

  __declspec(property(get = get_ContainerName))::StringW ContainerName;

  constexpr ::System::Security::Cryptography::CspParameters*& __get__params();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::CspParameters*> const& __get__params() const;

  constexpr void __set__params(::System::Security::Cryptography::CspParameters* value);

  constexpr ::StringW& __get__keyvalue();

  constexpr ::StringW const& __get__keyvalue() const;

  constexpr void __set__keyvalue(::StringW value);

  constexpr ::StringW& __get__filename();

  constexpr ::StringW const& __get__filename() const;

  constexpr void __set__filename(::StringW value);

  constexpr ::StringW& __get__container();

  constexpr ::StringW const& __get__container() const;

  constexpr void __set__container(::StringW value);

  static inline void setStaticF__userPathExists(bool value);

  static inline bool getStaticF__userPathExists();

  static inline void setStaticF__userPath(::StringW value);

  static inline ::StringW getStaticF__userPath();

  static inline void setStaticF__machinePathExists(bool value);

  static inline bool getStaticF__machinePathExists();

  static inline void setStaticF__machinePath(::StringW value);

  static inline ::StringW getStaticF__machinePath();

  static inline void setStaticF_lockobj(::System::Object* value);

  static inline ::System::Object* getStaticF_lockobj();

  static inline ::Mono::Security::Cryptography::KeyPairPersistence* New_ctor(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method .ctor addr 0x22c5454 size 0x8 virtual false final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters);

  static inline ::Mono::Security::Cryptography::KeyPairPersistence* New_ctor(::System::Security::Cryptography::CspParameters* parameters, ::StringW keyPair);

  /// @brief Method .ctor addr 0x22c545c size 0x84 virtual false final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters, ::StringW keyPair);

  /// @brief Method get_Filename addr 0x22c5578 size 0x18c virtual false final false
  inline ::StringW get_Filename();

  /// @brief Method get_KeyValue addr 0x22c62b4 size 0x8 virtual false final false
  inline ::StringW get_KeyValue();

  /// @brief Method set_KeyValue addr 0x22c62bc size 0x14 virtual false final false
  inline void set_KeyValue(::StringW value);

  /// @brief Method Load addr 0x22c62e0 size 0x1b0 virtual false final false
  inline bool Load();

  /// @brief Method Save addr 0x22c65ac size 0x24c virtual false final false
  inline void Save();

  /// @brief Method Remove addr 0x22c6b2c size 0x14 virtual false final false
  inline void Remove();

  /// @brief Method get_UserPath addr 0x22c5d6c size 0x548 virtual false final false
  static inline ::StringW get_UserPath();

  /// @brief Method get_MachinePath addr 0x22c5824 size 0x548 virtual false final false
  static inline ::StringW get_MachinePath();

  /// @brief Method _CanSecure addr 0x22c6c60 size 0x4 virtual false final false
  static inline bool _CanSecure(::cordl_internals::Ptr<char16_t> root);

  /// @brief Method _ProtectUser addr 0x22c6c64 size 0x4 virtual false final false
  static inline bool _ProtectUser(::cordl_internals::Ptr<char16_t> path);

  /// @brief Method _ProtectMachine addr 0x22c6c68 size 0x4 virtual false final false
  static inline bool _ProtectMachine(::cordl_internals::Ptr<char16_t> path);

  /// @brief Method _IsUserProtected addr 0x22c6c6c size 0x4 virtual false final false
  static inline bool _IsUserProtected(::cordl_internals::Ptr<char16_t> path);

  /// @brief Method _IsMachineProtected addr 0x22c6c70 size 0x4 virtual false final false
  static inline bool _IsMachineProtected(::cordl_internals::Ptr<char16_t> path);

  /// @brief Method CanSecure addr 0x22c6c74 size 0xa0 virtual false final false
  static inline bool CanSecure(::StringW path);

  /// @brief Method ProtectUser addr 0x22c6a9c size 0x90 virtual false final false
  static inline bool ProtectUser(::StringW path);

  /// @brief Method ProtectMachine addr 0x22c6a0c size 0x90 virtual false final false
  static inline bool ProtectMachine(::StringW path);

  /// @brief Method IsUserProtected addr 0x22c6b40 size 0x90 virtual false final false
  static inline bool IsUserProtected(::StringW path);

  /// @brief Method IsMachineProtected addr 0x22c6bd0 size 0x90 virtual false final false
  static inline bool IsMachineProtected(::StringW path);

  /// @brief Method get_CanChange addr 0x22c62d0 size 0x10 virtual false final false
  inline bool get_CanChange();

  /// @brief Method get_UseDefaultKeyContainer addr 0x22c6d14 size 0x20 virtual false final false
  inline bool get_UseDefaultKeyContainer();

  /// @brief Method get_UseMachineKeyStore addr 0x22c5804 size 0x20 virtual false final false
  inline bool get_UseMachineKeyStore();

  /// @brief Method get_ContainerName addr 0x22c5704 size 0x100 virtual false final false
  inline ::StringW get_ContainerName();

  /// @brief Method Copy addr 0x22c54e0 size 0x98 virtual false final false
  inline ::System::Security::Cryptography::CspParameters* Copy(::System::Security::Cryptography::CspParameters* p);

  /// @brief Method FromXml addr 0x22c6490 size 0x11c virtual false final false
  inline void FromXml(::StringW xml);

  /// @brief Method ToXml addr 0x22c67f8 size 0x214 virtual false final false
  inline ::StringW ToXml();

  // Ctor Parameters [CppParam { name: "", ty: "KeyPairPersistence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyPairPersistence(KeyPairPersistence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyPairPersistence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyPairPersistence(KeyPairPersistence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyPairPersistence();

public:
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
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::KeyPairPersistence, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____params) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____keyvalue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____filename) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::KeyPairPersistence, ____container) == 0x28, "Offset mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::KeyPairPersistence);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::KeyPairPersistence*, "Mono.Security.Cryptography", "KeyPairPersistence");
