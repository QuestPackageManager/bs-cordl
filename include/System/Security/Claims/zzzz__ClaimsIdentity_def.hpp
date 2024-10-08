#pragma once
// IWYU pragma private; include "System/Security/Claims/ClaimsIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClaimsIdentity)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class Collection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class Claim;
}
namespace System::Security::Claims {
class __ClaimsIdentity___get_Claims_d__51;
}
namespace System::Security::Principal {
class IIdentity;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System::Security::Claims {
class __ClaimsIdentity___get_Claims_d__51;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Claims::ClaimsIdentity);
MARK_REF_PTR_T(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51);
// Type: ::<get_Claims>d__51
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Claims {
// Is value type: false
// CS Name: ::ClaimsIdentity::<get_Claims>d__51*
class CORDL_TYPE __ClaimsIdentity___get_Claims_d__51 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current)) ::System::Security::Claims::Claim*
      System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Security::Claims::Claim* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Security::Claims::ClaimsIdentity* __4__this;

  /// @brief Field <>7__wrap2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3c4abe8, size 0x3f4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Security.Claims.Claim>.GetEnumerator, addr 0x3c4b0d4, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Security.Claims.Claim>.get_Current, addr 0x3c4b08c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Security::Claims::Claim* System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3c4b170, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3c4b094, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3c4b0cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3c4abcc, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Security::Claims::Claim*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Claims::Claim*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Security::Claims::ClaimsIdentity*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Claims::ClaimsIdentity*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>*> const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Security::Claims::Claim* value);

  constexpr void __cordl_internal_set___4__this(::System::Security::Claims::ClaimsIdentity* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x3c4afdc, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3c49aa8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* i___System__Collections__Generic__IEnumerable_1___System__Security__Claims__Claim__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* i___System__Collections__Generic__IEnumerator_1___System__Security__Claims__Claim__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClaimsIdentity___get_Claims_d__51();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ClaimsIdentity___get_Claims_d__51", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClaimsIdentity___get_Claims_d__51(__ClaimsIdentity___get_Claims_d__51&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClaimsIdentity___get_Claims_d__51", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClaimsIdentity___get_Claims_d__51(__ClaimsIdentity___get_Claims_d__51 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Claims::Claim* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Claims::ClaimsIdentity* _____4__this;

  /// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t ____i_5__2;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* _____7__wrap2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51, ____i_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51, _____7__wrap2) == 0x38, "Offset mismatch!");

} // namespace System::Security::Claims
// Type: System.Security.Claims::ClaimsIdentity
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Claims {
// Is value type: false
// CS Name: ::System.Security.Claims::ClaimsIdentity*
class CORDL_TYPE ClaimsIdentity : public ::System::Object {
public:
  // Declarations
  using _get_Claims_d__51 = ::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51;

  __declspec(property(get = get_Actor, put = set_Actor)) ::System::Security::Claims::ClaimsIdentity* Actor;

  __declspec(property(get = get_AuthenticationType)) ::StringW AuthenticationType;

  __declspec(property(get = get_Claims)) ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* Claims;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameClaimType)) ::StringW NameClaimType;

  /// @brief Field m_actor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_actor, put = __cordl_internal_set_m_actor)) ::System::Security::Claims::ClaimsIdentity* m_actor;

  /// @brief Field m_authenticationType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_authenticationType, put = __cordl_internal_set_m_authenticationType)) ::StringW m_authenticationType;

  /// @brief Field m_bootstrapContext, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_bootstrapContext, put = __cordl_internal_set_m_bootstrapContext)) ::System::Object* m_bootstrapContext;

  /// @brief Field m_externalClaims, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_externalClaims, put = __cordl_internal_set_m_externalClaims)) ::System::Collections::ObjectModel::Collection_1<
      ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>* m_externalClaims;

  /// @brief Field m_instanceClaims, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_instanceClaims,
                      put = __cordl_internal_set_m_instanceClaims)) ::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>* m_instanceClaims;

  /// @brief Field m_label, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_label, put = __cordl_internal_set_m_label)) ::StringW m_label;

  /// @brief Field m_nameType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_nameType, put = __cordl_internal_set_m_nameType)) ::StringW m_nameType;

  /// @brief Field m_roleType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_roleType, put = __cordl_internal_set_m_roleType)) ::StringW m_roleType;

  /// @brief Field m_serializedClaims, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializedClaims, put = __cordl_internal_set_m_serializedClaims)) ::StringW m_serializedClaims;

  /// @brief Field m_serializedNameType, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializedNameType, put = __cordl_internal_set_m_serializedNameType)) ::StringW m_serializedNameType;

  /// @brief Field m_serializedRoleType, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializedRoleType, put = __cordl_internal_set_m_serializedRoleType)) ::StringW m_serializedRoleType;

  /// @brief Field m_userSerializationData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_userSerializationData, put = __cordl_internal_set_m_userSerializationData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_userSerializationData;

  /// @brief Field m_version, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) ::StringW m_version;

  /// @brief Convert operator to "::System::Security::Principal::IIdentity"
  constexpr operator ::System::Security::Principal::IIdentity*() noexcept;

  /// @brief Method AddClaim, addr 0x3c431ac, size 0x170, virtual true, abstract: false, final false
  inline void AddClaim(::System::Security::Claims::Claim* claim);

  /// @brief Method Clone, addr 0x3c47a7c, size 0x154, virtual true, abstract: false, final false
  inline ::System::Security::Claims::ClaimsIdentity* Clone();

  /// @brief Method Deserialize, addr 0x3c49204, size 0x808, virtual false, abstract: false, final false
  inline void Deserialize(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool useContext);

  /// @brief Method DeserializeClaims, addr 0x3c4a1f0, size 0x33c, virtual false, abstract: false, final false
  inline void DeserializeClaims(::StringW serializedClaims);

  /// @brief Method FindFirst, addr 0x3c49b08, size 0x35c, virtual true, abstract: false, final false
  inline ::System::Security::Claims::Claim* FindFirst(::StringW type);

  /// @brief Method GetObjectData, addr 0x3c4a5fc, size 0x5d0, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsCircular, addr 0x3c48b24, size 0x3c, virtual false, abstract: false, final false
  inline bool IsCircular(::System::Security::Claims::ClaimsIdentity* subject);

  static inline ::System::Security::Claims::ClaimsIdentity* New_ctor();

  static inline ::System::Security::Claims::ClaimsIdentity* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims);

  static inline ::System::Security::Claims::ClaimsIdentity* New_ctor(::System::Security::Principal::IIdentity* identity,
                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims, ::StringW authenticationType,
                                                                     ::StringW nameType, ::StringW roleType);

  static inline ::System::Security::Claims::ClaimsIdentity* New_ctor(::System::Security::Principal::IIdentity* identity,
                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims, ::StringW authenticationType,
                                                                     ::StringW nameType, ::StringW roleType, bool checkAuthType);

  static inline ::System::Security::Claims::ClaimsIdentity* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::Claims::ClaimsIdentity* New_ctor(::System::Security::Claims::ClaimsIdentity* other);

  /// @brief Method OnDeserializedMethod, addr 0x3c4a11c, size 0xd4, virtual false, abstract: false, final false
  inline void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserializingMethod, addr 0x3c4a52c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDeserializingMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnSerializingMethod, addr 0x3c49e64, size 0x64, virtual false, abstract: false, final false
  inline void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SafeAddClaim, addr 0x3c48f48, size 0x128, virtual false, abstract: false, final false
  inline void SafeAddClaim(::System::Security::Claims::Claim* claim);

  /// @brief Method SafeAddClaims, addr 0x3c48b60, size 0x3e8, virtual false, abstract: false, final false
  inline void SafeAddClaims(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims);

  /// @brief Method SerializeClaims, addr 0x3c49ec8, size 0x254, virtual false, abstract: false, final false
  inline ::StringW SerializeClaims();

  constexpr ::System::Security::Claims::ClaimsIdentity*& __cordl_internal_get_m_actor();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Claims::ClaimsIdentity*> const& __cordl_internal_get_m_actor() const;

  constexpr ::StringW const& __cordl_internal_get_m_authenticationType() const;

  constexpr ::StringW& __cordl_internal_get_m_authenticationType();

  constexpr ::System::Object*& __cordl_internal_get_m_bootstrapContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_bootstrapContext() const;

  constexpr ::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>*& __cordl_internal_get_m_externalClaims();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>*> const&
  __cordl_internal_get_m_externalClaims() const;

  constexpr ::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>*& __cordl_internal_get_m_instanceClaims();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>*> const& __cordl_internal_get_m_instanceClaims() const;

  constexpr ::StringW const& __cordl_internal_get_m_label() const;

  constexpr ::StringW& __cordl_internal_get_m_label();

  constexpr ::StringW const& __cordl_internal_get_m_nameType() const;

  constexpr ::StringW& __cordl_internal_get_m_nameType();

  constexpr ::StringW const& __cordl_internal_get_m_roleType() const;

  constexpr ::StringW& __cordl_internal_get_m_roleType();

  constexpr ::StringW const& __cordl_internal_get_m_serializedClaims() const;

  constexpr ::StringW& __cordl_internal_get_m_serializedClaims();

  constexpr ::StringW const& __cordl_internal_get_m_serializedNameType() const;

  constexpr ::StringW& __cordl_internal_get_m_serializedNameType();

  constexpr ::StringW const& __cordl_internal_get_m_serializedRoleType() const;

  constexpr ::StringW& __cordl_internal_get_m_serializedRoleType();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_userSerializationData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_userSerializationData();

  constexpr ::StringW const& __cordl_internal_get_m_version() const;

  constexpr ::StringW& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_actor(::System::Security::Claims::ClaimsIdentity* value);

  constexpr void __cordl_internal_set_m_authenticationType(::StringW value);

  constexpr void __cordl_internal_set_m_bootstrapContext(::System::Object* value);

  constexpr void __cordl_internal_set_m_externalClaims(::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>* value);

  constexpr void __cordl_internal_set_m_instanceClaims(::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>* value);

  constexpr void __cordl_internal_set_m_label(::StringW value);

  constexpr void __cordl_internal_set_m_nameType(::StringW value);

  constexpr void __cordl_internal_set_m_roleType(::StringW value);

  constexpr void __cordl_internal_set_m_serializedClaims(::StringW value);

  constexpr void __cordl_internal_set_m_serializedNameType(::StringW value);

  constexpr void __cordl_internal_set_m_serializedRoleType(::StringW value);

  constexpr void __cordl_internal_set_m_userSerializationData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_version(::StringW value);

  /// @brief Method .ctor, addr 0x3c42d84, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c484b4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims);

  /// @brief Method .ctor, addr 0x3c484d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Principal::IIdentity* identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims, ::StringW authenticationType,
                    ::StringW nameType, ::StringW roleType);

  /// @brief Method .ctor, addr 0x3c484d8, size 0x64c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Principal::IIdentity* identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* claims, ::StringW authenticationType,
                    ::StringW nameType, ::StringW roleType, bool checkAuthType);

  /// @brief Method .ctor, addr 0x3c49070, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3c42ebc, size 0x1f4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Claims::ClaimsIdentity* other);

  /// @brief Method get_Actor, addr 0x3c49a14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Claims::ClaimsIdentity* get_Actor();

  /// @brief Method get_AuthenticationType, addr 0x3c49a0c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_AuthenticationType();

  /// @brief Method get_Claims, addr 0x3c4310c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* get_Claims();

  /// @brief Method get_Name, addr 0x3c49adc, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameClaimType, addr 0x3c49b00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NameClaimType();

  /// @brief Convert to "::System::Security::Principal::IIdentity"
  constexpr ::System::Security::Principal::IIdentity* i___System__Security__Principal__IIdentity() noexcept;

  /// @brief Method set_Actor, addr 0x3c49a1c, size 0x8c, virtual false, abstract: false, final false
  inline void set_Actor(::System::Security::Claims::ClaimsIdentity* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClaimsIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClaimsIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClaimsIdentity(ClaimsIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClaimsIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClaimsIdentity(ClaimsIdentity const&) = delete;

  /// @brief Field m_userSerializationData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_userSerializationData;

  /// @brief Field m_instanceClaims, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Claims::Claim*>* ___m_instanceClaims;

  /// @brief Field m_externalClaims, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>* ___m_externalClaims;

  /// @brief Field m_nameType, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_nameType;

  /// @brief Field m_roleType, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_roleType;

  /// @brief Field m_version, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_version;

  /// @brief Field m_actor, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Claims::ClaimsIdentity* ___m_actor;

  /// @brief Field m_authenticationType, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_authenticationType;

  /// @brief Field m_bootstrapContext, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ___m_bootstrapContext;

  /// @brief Field m_label, offset: 0x58, size: 0x8, def value: None
  ::StringW ___m_label;

  /// @brief Field m_serializedNameType, offset: 0x60, size: 0x8, def value: None
  ::StringW ___m_serializedNameType;

  /// @brief Field m_serializedRoleType, offset: 0x68, size: 0x8, def value: None
  ::StringW ___m_serializedRoleType;

  /// @brief Field m_serializedClaims, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_serializedClaims;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3009 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Claims::ClaimsIdentity, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_userSerializationData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_instanceClaims) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_externalClaims) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_nameType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_roleType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_version) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_actor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_authenticationType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_bootstrapContext) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_label) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_serializedNameType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_serializedRoleType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsIdentity, ___m_serializedClaims) == 0x70, "Offset mismatch!");

} // namespace System::Security::Claims
NEED_NO_BOX(::System::Security::Claims::ClaimsIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::ClaimsIdentity*, "System.Security.Claims", "ClaimsIdentity");
NEED_NO_BOX(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::__ClaimsIdentity___get_Claims_d__51*, "System.Security.Claims", "ClaimsIdentity/<get_Claims>d__51");
