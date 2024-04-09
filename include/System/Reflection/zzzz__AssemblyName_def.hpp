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
namespace Mono {
struct MonoAssemblyName;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct AssemblyNameFlags;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class StrongNameKeyPair;
}
namespace System::Runtime::InteropServices {
class _AssemblyName;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Version;
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
// CS Name: ::System.Reflection::AssemblyName*
class CORDL_TYPE AssemblyName : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CultureInfo))::System::Globalization::CultureInfo* CultureInfo;

  __declspec(property(get = get_Flags))::System::Reflection::AssemblyNameFlags Flags;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_IsPublicKeyValid)) bool IsPublicKeyValid;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Version, put = set_Version))::System::Version* Version;

  /// @brief Field build, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_build, put = __cordl_internal_set_build)) int32_t build;

  /// @brief Field codebase, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_codebase, put = __cordl_internal_set_codebase))::StringW codebase;

  /// @brief Field contentType, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType))::System::Reflection::AssemblyContentType contentType;

  /// @brief Field cultureinfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cultureinfo, put = __cordl_internal_set_cultureinfo))::System::Globalization::CultureInfo* cultureinfo;

  /// @brief Field flags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags))::System::Reflection::AssemblyNameFlags flags;

  /// @brief Field hashalg, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_hashalg, put = __cordl_internal_set_hashalg))::System::Configuration::Assemblies::AssemblyHashAlgorithm hashalg;

  /// @brief Field keyToken, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_keyToken, put = __cordl_internal_set_keyToken))::ArrayW<uint8_t, ::Array<uint8_t>*> keyToken;

  /// @brief Field keypair, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_keypair, put = __cordl_internal_set_keypair))::System::Reflection::StrongNameKeyPair* keypair;

  /// @brief Field major, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_major, put = __cordl_internal_set_major)) int32_t major;

  /// @brief Field minor, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_minor, put = __cordl_internal_set_minor)) int32_t minor;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field processor_architecture, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_processor_architecture, put = __cordl_internal_set_processor_architecture))::System::Reflection::ProcessorArchitecture processor_architecture;

  /// @brief Field publicKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Field revision, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_revision, put = __cordl_internal_set_revision)) int32_t revision;

  /// @brief Field version, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::System::Version* version;

  /// @brief Field versioncompat, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_versioncompat, put = __cordl_internal_set_versioncompat))::System::Configuration::Assemblies::AssemblyVersionCompatibility versioncompat;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_AssemblyName"
  constexpr operator ::System::Runtime::InteropServices::_AssemblyName*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Clone, addr 0x276b074, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method ComputePublicKeyToken, addr 0x276acb4, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputePublicKeyToken();

  /// @brief Method Create, addr 0x276b130, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Reflection::AssemblyName* Create(::System::Reflection::Assembly* assembly, bool fillCodebase);

  /// @brief Method FillName, addr 0x2769fb0, size 0x2a0, virtual false, abstract: false, final false
  inline void FillName(::cordl_internals::Ptr<::Mono::MonoAssemblyName> native, ::StringW codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef);

  /// @brief Method GetNativeName, addr 0x276b12c, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::Mono::MonoAssemblyName> GetNativeName(void* assembly_ptr);

  /// @brief Method GetObjectData, addr 0x276ad44, size 0x330, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPublicKeyToken, addr 0x275bfe0, size 0xe8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPublicKeyToken();

  /// @brief Method InternalGetPublicKeyToken, addr 0x276aacc, size 0xe8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> InternalGetPublicKeyToken();

  static inline ::System::Reflection::AssemblyName* New_ctor();

  static inline ::System::Reflection::AssemblyName* New_ctor(::StringW assemblyName);

  static inline ::System::Reflection::AssemblyName* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method OnDeserialization, addr 0x276b124, size 0x8, virtual true, abstract: false, final true
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method ParseAssemblyName, addr 0x2769fac, size 0x4, virtual false, abstract: false, final false
  static inline bool ParseAssemblyName(void* name, ByRef<::Mono::MonoAssemblyName> aname, ByRef<bool> is_version_definited, ByRef<bool> is_token_defined);

  /// @brief Method ToString, addr 0x276ac08, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_build() const;

  constexpr int32_t& __cordl_internal_get_build();

  constexpr ::StringW const& __cordl_internal_get_codebase() const;

  constexpr ::StringW& __cordl_internal_get_codebase();

  constexpr ::System::Reflection::AssemblyContentType const& __cordl_internal_get_contentType() const;

  constexpr ::System::Reflection::AssemblyContentType& __cordl_internal_get_contentType();

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get_cultureinfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get_cultureinfo() const;

  constexpr ::System::Reflection::AssemblyNameFlags const& __cordl_internal_get_flags() const;

  constexpr ::System::Reflection::AssemblyNameFlags& __cordl_internal_get_flags();

  constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm const& __cordl_internal_get_hashalg() const;

  constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm& __cordl_internal_get_hashalg();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_keyToken() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_keyToken();

  constexpr ::System::Reflection::StrongNameKeyPair*& __cordl_internal_get_keypair();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::StrongNameKeyPair*> const& __cordl_internal_get_keypair() const;

  constexpr int32_t const& __cordl_internal_get_major() const;

  constexpr int32_t& __cordl_internal_get_major();

  constexpr int32_t const& __cordl_internal_get_minor() const;

  constexpr int32_t& __cordl_internal_get_minor();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Reflection::ProcessorArchitecture const& __cordl_internal_get_processor_architecture() const;

  constexpr ::System::Reflection::ProcessorArchitecture& __cordl_internal_get_processor_architecture();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_publicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_publicKey();

  constexpr int32_t const& __cordl_internal_get_revision() const;

  constexpr int32_t& __cordl_internal_get_revision();

  constexpr ::System::Version*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __cordl_internal_get_version() const;

  constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility const& __cordl_internal_get_versioncompat() const;

  constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility& __cordl_internal_get_versioncompat();

  constexpr void __cordl_internal_set_build(int32_t value);

  constexpr void __cordl_internal_set_codebase(::StringW value);

  constexpr void __cordl_internal_set_contentType(::System::Reflection::AssemblyContentType value);

  constexpr void __cordl_internal_set_cultureinfo(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set_flags(::System::Reflection::AssemblyNameFlags value);

  constexpr void __cordl_internal_set_hashalg(::System::Configuration::Assemblies::AssemblyHashAlgorithm value);

  constexpr void __cordl_internal_set_keyToken(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_keypair(::System::Reflection::StrongNameKeyPair* value);

  constexpr void __cordl_internal_set_major(int32_t value);

  constexpr void __cordl_internal_set_minor(int32_t value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_processor_architecture(::System::Reflection::ProcessorArchitecture value);

  constexpr void __cordl_internal_set_publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_revision(int32_t value);

  constexpr void __cordl_internal_set_version(::System::Version* value);

  constexpr void __cordl_internal_set_versioncompat(::System::Configuration::Assemblies::AssemblyVersionCompatibility value);

  /// @brief Method .ctor, addr 0x2769f8c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x275bd48, size 0x298, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyName);

  /// @brief Method .ctor, addr 0x276a250, size 0x508, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method get_CultureInfo, addr 0x276a760, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_CultureInfo();

  /// @brief Method get_Flags, addr 0x276a768, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::AssemblyNameFlags get_Flags();

  /// @brief Method get_FullName, addr 0x276a770, size 0x35c, virtual false, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_IsPublicKeyValid, addr 0x276ac30, size 0x84, virtual false, abstract: false, final false
  inline bool get_IsPublicKeyValid();

  /// @brief Method get_Name, addr 0x276a758, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Version, addr 0x276abb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Version* get_Version();

  /// @brief Method get_public_token, addr 0x276ad40, size 0x4, virtual false, abstract: false, final false
  static inline void get_public_token(::cordl_internals::Ptr<uint8_t> token, ::cordl_internals::Ptr<uint8_t> pubkey, int32_t len);

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::InteropServices::_AssemblyName"
  constexpr ::System::Runtime::InteropServices::_AssemblyName* i___System__Runtime__InteropServices___AssemblyName() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_Version, addr 0x276abbc, size 0x4c, virtual false, abstract: false, final false
  inline void set_Version(::System::Version* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyName(AssemblyName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyName(AssemblyName const&) = delete;

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

static_assert(offsetof(::System::Reflection::AssemblyName, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___codebase) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___major) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___minor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___build) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___revision) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___cultureinfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___flags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___hashalg) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___keypair) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___publicKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___keyToken) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___versioncompat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___version) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___processor_architecture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyName, ___contentType) == 0x6c, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyName);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyName*, "System.Reflection", "AssemblyName");
