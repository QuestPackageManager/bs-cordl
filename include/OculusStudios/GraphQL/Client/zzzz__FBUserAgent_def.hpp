#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/FBUserAgent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FBUserAgent)
namespace OculusStudios::GraphQL::Client {
class FBUserAgent__EncodedPropertyKeys_d__7;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class FBUserAgent;
}
namespace OculusStudios::GraphQL::Client {
class FBUserAgent__EncodedPropertyKeys_d__7;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::FBUserAgent);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.FBUserAgent/<EncodedPropertyKeys>d__7
class CORDL_TYPE FBUserAgent__EncodedPropertyKeys_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::StringW __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5d756a8, size 0x198, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x5d75888, size 0x8c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x5d75840, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5d75914, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d75848, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d75880, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5d756a4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x5d74a0c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FBUserAgent__EncodedPropertyKeys_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FBUserAgent__EncodedPropertyKeys_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FBUserAgent__EncodedPropertyKeys_d__7(FBUserAgent__EncodedPropertyKeys_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FBUserAgent__EncodedPropertyKeys_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FBUserAgent__EncodedPropertyKeys_d__7(FBUserAgent__EncodedPropertyKeys_d__7 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20179 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7, 0x28>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.FBUserAgent
class CORDL_TYPE FBUserAgent : public ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW> {
public:
  // Declarations
  using _EncodedPropertyKeys_d__7 = ::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7;

  __declspec(property(get = get_appName, put = set_appName)) ::StringW appName;

  __declspec(property(get = get_appVersion, put = set_appVersion)) ::StringW appVersion;

  __declspec(property(get = get_buildVersion, put = set_buildVersion)) ::StringW buildVersion;

  __declspec(property(get = get_device, put = set_device)) ::StringW device;

  /// @brief Field friendlyNames, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_friendlyNames, put = __cordl_internal_set_friendlyNames)) ::ArrayW<::StringW, ::Array<::StringW>*> friendlyNames;

  __declspec(property(get = get_locale, put = set_locale)) ::StringW locale;

  /// @brief Field sb_, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_sb_, put = __cordl_internal_set_sb_)) ::System::Text::StringBuilder* sb_;

  __declspec(property(get = get_systemName, put = set_systemName)) ::StringW systemName;

  __declspec(property(get = get_systemVersion, put = set_systemVersion)) ::StringW systemVersion;

  /// @brief Method AddEncodedProperties, addr 0x5d751d4, size 0x43c, virtual false, abstract: false, final false
  inline void AddEncodedProperties();

  /// @brief Method AddFriendlyNames, addr 0x5d75120, size 0xb4, virtual false, abstract: false, final false
  inline void AddFriendlyNames();

  /// @brief Method EncodedPropertyKeys, addr 0x5d749a4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EncodedPropertyKeys();

  /// @brief Method GetPropertyOrNull, addr 0x5d74a78, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetPropertyOrNull(::StringW key);

  static inline ::OculusStudios::GraphQL::Client::FBUserAgent* New_ctor();

  /// @brief Method Serialize, addr 0x5d750a0, size 0x80, virtual false, abstract: false, final false
  inline ::StringW Serialize();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_friendlyNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_friendlyNames();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_sb_() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_sb_();

  constexpr void __cordl_internal_set_friendlyNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_sb_(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x5d75610, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_appName, addr 0x5d74a2c, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_appName();

  /// @brief Method get_appVersion, addr 0x5d74ba8, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_appVersion();

  /// @brief Method get_buildVersion, addr 0x5d74c7c, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_buildVersion();

  /// @brief Method get_device, addr 0x5d74d50, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_device();

  /// @brief Method get_locale, addr 0x5d74fcc, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_locale();

  /// @brief Method get_systemName, addr 0x5d74e24, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_systemName();

  /// @brief Method get_systemVersion, addr 0x5d74ef8, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_systemVersion();

  /// @brief Method set_appName, addr 0x5d74b20, size 0x88, virtual false, abstract: false, final false
  inline void set_appName(::StringW value);

  /// @brief Method set_appVersion, addr 0x5d74bf4, size 0x88, virtual false, abstract: false, final false
  inline void set_appVersion(::StringW value);

  /// @brief Method set_buildVersion, addr 0x5d74cc8, size 0x88, virtual false, abstract: false, final false
  inline void set_buildVersion(::StringW value);

  /// @brief Method set_device, addr 0x5d74d9c, size 0x88, virtual false, abstract: false, final false
  inline void set_device(::StringW value);

  /// @brief Method set_locale, addr 0x5d75018, size 0x88, virtual false, abstract: false, final false
  inline void set_locale(::StringW value);

  /// @brief Method set_systemName, addr 0x5d74e70, size 0x88, virtual false, abstract: false, final false
  inline void set_systemName(::StringW value);

  /// @brief Method set_systemVersion, addr 0x5d74f44, size 0x88, virtual false, abstract: false, final false
  inline void set_systemVersion(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FBUserAgent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FBUserAgent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FBUserAgent(FBUserAgent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FBUserAgent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FBUserAgent(FBUserAgent const&) = delete;

  /// @brief Field APP_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString APP_NAME{ u"FBAN" };

  /// @brief Field APP_VERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString APP_VERSION{ u"FBAV" };

  /// @brief Field BUILD_VERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString BUILD_VERSION{ u"FBBV" };

  /// @brief Field DEVICE offset 0xffffffff size 0x8
  static constexpr ::ConstString DEVICE{ u"FBDV" };

  /// @brief Field LOCALE offset 0xffffffff size 0x8
  static constexpr ::ConstString LOCALE{ u"FBLC" };

  /// @brief Field SYSTEM_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString SYSTEM_NAME{ u"FBSN" };

  /// @brief Field SYSTEM_VERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString SYSTEM_VERSION{ u"FBSV" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20180 };

  /// @brief Field friendlyNames, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___friendlyNames;

  /// @brief Field sb_, offset: 0x58, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___sb_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::FBUserAgent, ___friendlyNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::FBUserAgent, ___sb_) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::FBUserAgent, 0x60>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::FBUserAgent);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::FBUserAgent*, "OculusStudios.GraphQL.Client", "FBUserAgent");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::FBUserAgent__EncodedPropertyKeys_d__7*, "OculusStudios.GraphQL.Client", "FBUserAgent/<EncodedPropertyKeys>d__7");
