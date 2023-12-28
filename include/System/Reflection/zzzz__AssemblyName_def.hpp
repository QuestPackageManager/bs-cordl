#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/Assemblies/zzzz__AssemblyHashAlgorithm_def.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyVersionCompatibility_def.hpp"
#include "System/Reflection/zzzz__AssemblyContentType_def.hpp"
#include "System/Reflection/zzzz__AssemblyNameFlags_def.hpp"
#include "System/Reflection/zzzz__ProcessorArchitecture_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyName)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Version;
}
namespace System {
class Object;
}
namespace System {
class ICloneable;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Reflection {
class StrongNameKeyPair;
}
namespace System::Runtime::InteropServices {
class _AssemblyName;
}
namespace Mono {
struct MonoAssemblyName;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
struct AssemblyNameFlags;
}
// Forward declare root types
namespace System::Reflection {
class AssemblyName;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyName);
// Type: System.Reflection::AssemblyName
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3454)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3750)),
// TypeDefinitionIndex(TypeDefinitionIndex(3486)), TypeDefinitionIndex(TypeDefinitionIndex(3751)), TypeDefinitionIndex(TypeDefinitionIndex(3446))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3512))
// CS Name: ::System.Reflection::AssemblyName*
class CORDL_TYPE AssemblyName : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field codebase, offset 0x18, size 0x8
  __declspec(property(get = __get_codebase, put = __set_codebase))::StringW codebase;

  /// @brief Field major, offset 0x20, size 0x4
  __declspec(property(get = __get_major, put = __set_major)) int32_t major;

  /// @brief Field minor, offset 0x24, size 0x4
  __declspec(property(get = __get_minor, put = __set_minor)) int32_t minor;

  /// @brief Field build, offset 0x28, size 0x4
  __declspec(property(get = __get_build, put = __set_build)) int32_t build;

  /// @brief Field revision, offset 0x2c, size 0x4
  __declspec(property(get = __get_revision, put = __set_revision)) int32_t revision;

  /// @brief Field cultureinfo, offset 0x30, size 0x8
  __declspec(property(get = __get_cultureinfo, put = __set_cultureinfo))::System::Globalization::CultureInfo* cultureinfo;

  /// @brief Field flags, offset 0x38, size 0x4
  __declspec(property(get = __get_flags, put = __set_flags))::System::Reflection::AssemblyNameFlags flags;

  /// @brief Field hashalg, offset 0x3c, size 0x4
  __declspec(property(get = __get_hashalg, put = __set_hashalg))::System::Configuration::Assemblies::AssemblyHashAlgorithm hashalg;

  /// @brief Field keypair, offset 0x40, size 0x8
  __declspec(property(get = __get_keypair, put = __set_keypair))::System::Reflection::StrongNameKeyPair* keypair;

  /// @brief Field publicKey, offset 0x48, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Field keyToken, offset 0x50, size 0x8
  __declspec(property(get = __get_keyToken, put = __set_keyToken))::ArrayW<uint8_t, ::Array<uint8_t>*> keyToken;

  /// @brief Field versioncompat, offset 0x58, size 0x4
  __declspec(property(get = __get_versioncompat, put = __set_versioncompat))::System::Configuration::Assemblies::AssemblyVersionCompatibility versioncompat;

  /// @brief Field version, offset 0x60, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::System::Version* version;

  /// @brief Field processor_architecture, offset 0x68, size 0x4
  __declspec(property(get = __get_processor_architecture, put = __set_processor_architecture))::System::Reflection::ProcessorArchitecture processor_architecture;

  /// @brief Field contentType, offset 0x6c, size 0x4
  __declspec(property(get = __get_contentType, put = __set_contentType))::System::Reflection::AssemblyContentType contentType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_CultureInfo))::System::Globalization::CultureInfo* CultureInfo;

  __declspec(property(get = get_Flags))::System::Reflection::AssemblyNameFlags Flags;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_Version, put = set_Version))::System::Version* Version;

  __declspec(property(get = get_IsPublicKeyValid)) bool IsPublicKeyValid;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_AssemblyName"
  constexpr operator ::System::Runtime::InteropServices::_AssemblyName*() noexcept;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::StringW& __get_codebase();

  constexpr ::StringW const& __get_codebase() const;

  constexpr void __set_codebase(::StringW value);

  constexpr int32_t& __get_major();

  constexpr int32_t const& __get_major() const;

  constexpr void __set_major(int32_t value);

  constexpr int32_t& __get_minor();

  constexpr int32_t const& __get_minor() const;

  constexpr void __set_minor(int32_t value);

  constexpr int32_t& __get_build();

  constexpr int32_t const& __get_build() const;

  constexpr void __set_build(int32_t value);

  constexpr int32_t& __get_revision();

  constexpr int32_t const& __get_revision() const;

  constexpr void __set_revision(int32_t value);

  constexpr ::System::Globalization::CultureInfo*& __get_cultureinfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get_cultureinfo() const;

  constexpr void __set_cultureinfo(::System::Globalization::CultureInfo* value);

  constexpr ::System::Reflection::AssemblyNameFlags& __get_flags();

  constexpr ::System::Reflection::AssemblyNameFlags const& __get_flags() const;

  constexpr void __set_flags(::System::Reflection::AssemblyNameFlags value);

  constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm& __get_hashalg();

  constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm const& __get_hashalg() const;

  constexpr void __set_hashalg(::System::Configuration::Assemblies::AssemblyHashAlgorithm value);

  constexpr ::System::Reflection::StrongNameKeyPair*& __get_keypair();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::StrongNameKeyPair*> const& __get_keypair() const;

  constexpr void __set_keypair(::System::Reflection::StrongNameKeyPair* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_publicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_keyToken();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_keyToken() const;

  constexpr void __set_keyToken(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility& __get_versioncompat();

  constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility const& __get_versioncompat() const;

  constexpr void __set_versioncompat(::System::Configuration::Assemblies::AssemblyVersionCompatibility value);

  constexpr ::System::Version*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get_version() const;

  constexpr void __set_version(::System::Version* value);

  constexpr ::System::Reflection::ProcessorArchitecture& __get_processor_architecture();

  constexpr ::System::Reflection::ProcessorArchitecture const& __get_processor_architecture() const;

  constexpr void __set_processor_architecture(::System::Reflection::ProcessorArchitecture value);

  constexpr ::System::Reflection::AssemblyContentType& __get_contentType();

  constexpr ::System::Reflection::AssemblyContentType const& __get_contentType() const;

  constexpr void __set_contentType(::System::Reflection::AssemblyContentType value);

  static inline ::System::Reflection::AssemblyName* New_ctor();

  /// @brief Method .ctor addr 0x24ef444 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ParseAssemblyName addr 0x24ef464 size 0x4 virtual false final false
  static inline bool ParseAssemblyName(void* name, ByRef<::Mono::MonoAssemblyName> aname, ByRef<bool> is_version_definited, ByRef<bool> is_token_defined);

  static inline ::System::Reflection::AssemblyName* New_ctor(::StringW assemblyName);

  /// @brief Method .ctor addr 0x24e1aa8 size 0x298 virtual false final false
  inline void _ctor(::StringW assemblyName);

  static inline ::System::Reflection::AssemblyName* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method .ctor addr 0x24ef708 size 0x508 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method get_Name addr 0x24efc10 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method get_CultureInfo addr 0x24efc18 size 0x8 virtual false final false
  inline ::System::Globalization::CultureInfo* get_CultureInfo();

  /// @brief Method get_Flags addr 0x24efc20 size 0x8 virtual false final false
  inline ::System::Reflection::AssemblyNameFlags get_Flags();

  /// @brief Method get_FullName addr 0x24efc28 size 0x35c virtual false final false
  inline ::StringW get_FullName();

  /// @brief Method get_Version addr 0x24f006c size 0x8 virtual false final false
  inline ::System::Version* get_Version();

  /// @brief Method set_Version addr 0x24f0074 size 0x4c virtual false final false
  inline void set_Version(::System::Version* value);

  /// @brief Method ToString addr 0x24f00c0 size 0x28 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetPublicKeyToken addr 0x24e1d40 size 0xe8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPublicKeyToken();

  /// @brief Method get_IsPublicKeyValid addr 0x24f00e8 size 0x84 virtual false final false
  inline bool get_IsPublicKeyValid();

  /// @brief Method InternalGetPublicKeyToken addr 0x24eff84 size 0xe8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> InternalGetPublicKeyToken();

  /// @brief Method get_public_token addr 0x24f01f8 size 0x4 virtual false final false
  static inline void get_public_token(::cordl_internals::Ptr<uint8_t> token, ::cordl_internals::Ptr<uint8_t> pubkey, int32_t len);

  /// @brief Method ComputePublicKeyToken addr 0x24f016c size 0x8c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputePublicKeyToken();

  /// @brief Method GetObjectData addr 0x24f01fc size 0x330 virtual true final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Clone addr 0x24f052c size 0xb0 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method OnDeserialization addr 0x24f05dc size 0x8 virtual true final true
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method GetNativeName addr 0x24f05e4 size 0x4 virtual false final false
  static inline ::cordl_internals::Ptr<::Mono::MonoAssemblyName> GetNativeName(void* assembly_ptr);

  /// @brief Method FillName addr 0x24ef468 size 0x2a0 virtual false final false
  inline void FillName(::cordl_internals::Ptr<::Mono::MonoAssemblyName> native, ::StringW codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef);

  /// @brief Method Create addr 0x24f05e8 size 0xcc virtual false final false
  static inline ::System::Reflection::AssemblyName* Create(::System::Reflection::Assembly* assembly, bool fillCodebase);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyName(AssemblyName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyName(AssemblyName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyName();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field codebase, offset: 0x18, size: 0x8, def value: None
  ::StringW ___codebase;

  /// @brief Field major, offset: 0x20, size: 0x4, def value: None
  int32_t ___major;

  /// @brief Field minor, offset: 0x24, size: 0x4, def value: None
  int32_t ___minor;

  /// @brief Field build, offset: 0x28, size: 0x4, def value: None
  int32_t ___build;

  /// @brief Field revision, offset: 0x2c, size: 0x4, def value: None
  int32_t ___revision;

  /// @brief Field cultureinfo, offset: 0x30, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ___cultureinfo;

  /// @brief Field flags, offset: 0x38, size: 0x4, def value: None
  ::System::Reflection::AssemblyNameFlags ___flags;

  /// @brief Field hashalg, offset: 0x3c, size: 0x4, def value: None
  ::System::Configuration::Assemblies::AssemblyHashAlgorithm ___hashalg;

  /// @brief Field keypair, offset: 0x40, size: 0x8, def value: None
  ::System::Reflection::StrongNameKeyPair* ___keypair;

  /// @brief Field publicKey, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___publicKey;

  /// @brief Field keyToken, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keyToken;

  /// @brief Field versioncompat, offset: 0x58, size: 0x4, def value: None
  ::System::Configuration::Assemblies::AssemblyVersionCompatibility ___versioncompat;

  /// @brief Field version, offset: 0x60, size: 0x8, def value: None
  ::System::Version* ___version;

  /// @brief Field processor_architecture, offset: 0x68, size: 0x4, def value: None
  ::System::Reflection::ProcessorArchitecture ___processor_architecture;

  /// @brief Field contentType, offset: 0x6c, size: 0x4, def value: None
  ::System::Reflection::AssemblyContentType ___contentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyName, 0x70>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyName);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyName*, "System.Reflection", "AssemblyName");
