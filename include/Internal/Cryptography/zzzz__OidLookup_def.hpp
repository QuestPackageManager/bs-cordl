#pragma once
// IWYU pragma private; include "Internal/Cryptography/OidLookup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OidLookup)
namespace Internal::Cryptography {
class OidLookup___c;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Security::Cryptography {
struct OidGroup;
}
// Forward declare root types
namespace Internal::Cryptography {
class OidLookup;
}
namespace Internal::Cryptography {
class OidLookup___c;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Cryptography::OidLookup);
MARK_REF_PTR_T(::Internal::Cryptography::OidLookup___c);
// Dependencies System.Object
namespace Internal::Cryptography {
// Is value type: false
// CS Name: Internal.Cryptography.OidLookup/<>c
class CORDL_TYPE OidLookup___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Internal::Cryptography::OidLookup___c* __9;

  static inline ::Internal::Cryptography::OidLookup___c* New_ctor();

  /// @brief Method <.cctor>b__10_0, addr 0x411d46c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__10_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  /// @brief Method <.cctor>b__10_1, addr 0x411d4a8, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__10_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  /// @brief Method .ctor, addr 0x411d464, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Internal::Cryptography::OidLookup___c* getStaticF___9();

  static inline void setStaticF___9(::Internal::Cryptography::OidLookup___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OidLookup___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OidLookup___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OidLookup___c(OidLookup___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OidLookup___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OidLookup___c(OidLookup___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::OidLookup___c, 0x10>, "Size mismatch!");

} // namespace Internal::Cryptography
// Dependencies System.Object
namespace Internal::Cryptography {
// Is value type: false
// CS Name: Internal.Cryptography.OidLookup
class CORDL_TYPE OidLookup : public ::System::Object {
public:
  // Declarations
  using __c = ::Internal::Cryptography::OidLookup___c;

  /// @brief Field s_compatOids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_compatOids, put = setStaticF_s_compatOids)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_compatOids;

  /// @brief Field s_friendlyNameToOid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_friendlyNameToOid, put = setStaticF_s_friendlyNameToOid)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_friendlyNameToOid;

  /// @brief Field s_lateBoundFriendlyNameToOid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_lateBoundFriendlyNameToOid,
                      put = setStaticF_s_lateBoundFriendlyNameToOid)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* s_lateBoundFriendlyNameToOid;

  /// @brief Field s_lateBoundOidToFriendlyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_lateBoundOidToFriendlyName,
                      put = setStaticF_s_lateBoundOidToFriendlyName)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* s_lateBoundOidToFriendlyName;

  /// @brief Field s_oidToFriendlyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_oidToFriendlyName, put = setStaticF_s_oidToFriendlyName)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_oidToFriendlyName;

  /// @brief Method NativeFriendlyNameToOid, addr 0x411b3a0, size 0x3bc, virtual false, abstract: false, final false
  static inline ::StringW NativeFriendlyNameToOid(::StringW friendlyName, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups);

  /// @brief Method NativeOidToFriendlyName, addr 0x411ae40, size 0x3b0, virtual false, abstract: false, final false
  static inline ::StringW NativeOidToFriendlyName(::StringW oid, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups);

  /// @brief Method ShouldUseCache, addr 0x411ae38, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldUseCache(::System::Security::Cryptography::OidGroup oidGroup);

  /// @brief Method ToFriendlyName, addr 0x411ac5c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::StringW ToFriendlyName(::StringW oid, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups);

  /// @brief Method ToOid, addr 0x411b1f0, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToOid(::StringW friendlyName, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_compatOids();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_friendlyNameToOid();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* getStaticF_s_lateBoundFriendlyNameToOid();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* getStaticF_s_lateBoundOidToFriendlyName();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_oidToFriendlyName();

  static inline void setStaticF_s_compatOids(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_friendlyNameToOid(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_lateBoundFriendlyNameToOid(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_lateBoundOidToFriendlyName(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_oidToFriendlyName(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OidLookup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OidLookup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OidLookup(OidLookup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OidLookup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OidLookup(OidLookup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9172 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::OidLookup, 0x10>, "Size mismatch!");

} // namespace Internal::Cryptography
NEED_NO_BOX(::Internal::Cryptography::OidLookup);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::OidLookup*, "Internal.Cryptography", "OidLookup");
NEED_NO_BOX(::Internal::Cryptography::OidLookup___c);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::OidLookup___c*, "Internal.Cryptography", "OidLookup/<>c");
