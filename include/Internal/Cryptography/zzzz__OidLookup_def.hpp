#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OidLookup)
namespace Internal::Cryptography {
class __OidLookup____c;
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
class __OidLookup____c;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Cryptography::OidLookup);
MARK_REF_PTR_T(::Internal::Cryptography::__OidLookup____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Internal::Cryptography {
// Is value type: false
// CS Name: ::OidLookup::<>c*
class CORDL_TYPE __OidLookup____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Internal::Cryptography::__OidLookup____c* __9;

  static inline ::Internal::Cryptography::__OidLookup____c* New_ctor();

  /// @brief Method <.cctor>b__10_0, addr 0x2b6fd44, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__10_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  /// @brief Method <.cctor>b__10_1, addr 0x2b6fd80, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__10_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  /// @brief Method .ctor, addr 0x2b6fd3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Internal::Cryptography::__OidLookup____c* getStaticF___9();

  static inline void setStaticF___9(::Internal::Cryptography::__OidLookup____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OidLookup____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OidLookup____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OidLookup____c(__OidLookup____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OidLookup____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OidLookup____c(__OidLookup____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::__OidLookup____c, 0x10>, "Size mismatch!");

} // namespace Internal::Cryptography
// Type: Internal.Cryptography::OidLookup
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Internal::Cryptography {
// Is value type: false
// CS Name: ::Internal.Cryptography::OidLookup*
class CORDL_TYPE OidLookup : public ::System::Object {
public:
  // Declarations
  using __c = ::Internal::Cryptography::__OidLookup____c;

  /// @brief Field s_compatOids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_compatOids, put = setStaticF_s_compatOids))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_compatOids;

  /// @brief Field s_friendlyNameToOid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_friendlyNameToOid, put = setStaticF_s_friendlyNameToOid))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_friendlyNameToOid;

  /// @brief Field s_lateBoundFriendlyNameToOid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lateBoundFriendlyNameToOid,
                             put = setStaticF_s_lateBoundFriendlyNameToOid))::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* s_lateBoundFriendlyNameToOid;

  /// @brief Field s_lateBoundOidToFriendlyName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lateBoundOidToFriendlyName,
                             put = setStaticF_s_lateBoundOidToFriendlyName))::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* s_lateBoundOidToFriendlyName;

  /// @brief Field s_oidToFriendlyName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_oidToFriendlyName, put = setStaticF_s_oidToFriendlyName))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_oidToFriendlyName;

  /// @brief Method NativeFriendlyNameToOid, addr 0x2b6dcd4, size 0x344, virtual false, abstract: false, final false
  static inline ::StringW NativeFriendlyNameToOid(::StringW friendlyName, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups);

  /// @brief Method NativeOidToFriendlyName, addr 0x2b6d7e8, size 0x338, virtual false, abstract: false, final false
  static inline ::StringW NativeOidToFriendlyName(::StringW oid, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups);

  /// @brief Method ShouldUseCache, addr 0x2b6d7e0, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldUseCache(::System::Security::Cryptography::OidGroup oidGroup);

  /// @brief Method ToFriendlyName, addr 0x2b6d600, size 0x1e0, virtual false, abstract: false, final false
  static inline ::StringW ToFriendlyName(::StringW oid, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups);

  /// @brief Method ToOid, addr 0x2b6db20, size 0x1b4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::OidLookup, 0x10>, "Size mismatch!");

} // namespace Internal::Cryptography
NEED_NO_BOX(::Internal::Cryptography::OidLookup);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::OidLookup*, "Internal.Cryptography", "OidLookup");
NEED_NO_BOX(::Internal::Cryptography::__OidLookup____c);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::__OidLookup____c*, "Internal.Cryptography", "OidLookup/<>c");
