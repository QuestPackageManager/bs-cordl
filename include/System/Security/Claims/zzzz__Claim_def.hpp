#pragma once
// IWYU pragma private; include "System/Security/Claims/Claim.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Claim)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Claims {
class Claim;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Claims::Claim);
// Type: System.Security.Claims::Claim
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Claims {
// Is value type: false
// CS Name: ::System.Security.Claims::Claim*
class CORDL_TYPE Claim : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Properties;

  __declspec(property(get = get_Subject, put = set_Subject))::System::Security::Claims::ClaimsIdentity* Subject;

  __declspec(property(get = get_Type))::StringW Type;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Field m_issuer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_issuer, put = __cordl_internal_set_m_issuer))::StringW m_issuer;

  /// @brief Field m_originalIssuer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_originalIssuer, put = __cordl_internal_set_m_originalIssuer))::StringW m_originalIssuer;

  /// @brief Field m_properties, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_properties, put = __cordl_internal_set_m_properties))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* m_properties;

  /// @brief Field m_propertyLock, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_propertyLock, put = __cordl_internal_set_m_propertyLock))::System::Object* m_propertyLock;

  /// @brief Field m_subject, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_subject, put = __cordl_internal_set_m_subject))::System::Security::Claims::ClaimsIdentity* m_subject;

  /// @brief Field m_type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_type, put = __cordl_internal_set_m_type))::StringW m_type;

  /// @brief Field m_userSerializationData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_userSerializationData, put = __cordl_internal_set_m_userSerializationData))::ArrayW<uint8_t, ::Array<uint8_t>*> m_userSerializationData;

  /// @brief Field m_value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_value, put = __cordl_internal_set_m_value))::StringW m_value;

  /// @brief Field m_valueType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_valueType, put = __cordl_internal_set_m_valueType))::StringW m_valueType;

  /// @brief Method Clone, addr 0x2817228, size 0x70, virtual true, abstract: false, final false
  inline ::System::Security::Claims::Claim* Clone(::System::Security::Claims::ClaimsIdentity* identity);

  static inline ::System::Security::Claims::Claim* New_ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject);

  static inline ::System::Security::Claims::Claim* New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                            ::System::Security::Claims::ClaimsIdentity* subject);

  static inline ::System::Security::Claims::Claim* New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                            ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey, ::StringW propertyValue);

  /// @brief Method OnDeserializedMethod, addr 0x28171a8, size 0x60, virtual false, abstract: false, final false
  inline void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x2817298, size 0x78, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_m_issuer() const;

  constexpr ::StringW& __cordl_internal_get_m_issuer();

  constexpr ::StringW const& __cordl_internal_get_m_originalIssuer() const;

  constexpr ::StringW& __cordl_internal_get_m_originalIssuer();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_m_properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_m_properties() const;

  constexpr ::System::Object*& __cordl_internal_get_m_propertyLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_propertyLock() const;

  constexpr ::System::Security::Claims::ClaimsIdentity*& __cordl_internal_get_m_subject();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Claims::ClaimsIdentity*> const& __cordl_internal_get_m_subject() const;

  constexpr ::StringW const& __cordl_internal_get_m_type() const;

  constexpr ::StringW& __cordl_internal_get_m_type();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_userSerializationData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_userSerializationData();

  constexpr ::StringW const& __cordl_internal_get_m_value() const;

  constexpr ::StringW& __cordl_internal_get_m_value();

  constexpr ::StringW const& __cordl_internal_get_m_valueType() const;

  constexpr ::StringW& __cordl_internal_get_m_valueType();

  constexpr void __cordl_internal_set_m_issuer(::StringW value);

  constexpr void __cordl_internal_set_m_originalIssuer(::StringW value);

  constexpr void __cordl_internal_set_m_properties(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_m_propertyLock(::System::Object* value);

  constexpr void __cordl_internal_set_m_subject(::System::Security::Claims::ClaimsIdentity* value);

  constexpr void __cordl_internal_set_m_type(::StringW value);

  constexpr void __cordl_internal_set_m_userSerializationData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_value(::StringW value);

  constexpr void __cordl_internal_set_m_valueType(::StringW value);

  /// @brief Method .ctor, addr 0x2816e94, size 0x314, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject);

  /// @brief Method .ctor, addr 0x2811db0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject);

  /// @brief Method .ctor, addr 0x2816b04, size 0x258, virtual false, abstract: false, final false
  inline void _ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey,
                    ::StringW propertyValue);

  /// @brief Method get_Properties, addr 0x2816d5c, size 0x138, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Properties();

  /// @brief Method get_Subject, addr 0x2817208, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Claims::ClaimsIdentity* get_Subject();

  /// @brief Method get_Type, addr 0x2817218, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method get_Value, addr 0x2817220, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Subject, addr 0x2817210, size 0x8, virtual false, abstract: false, final false
  inline void set_Subject(::System::Security::Claims::ClaimsIdentity* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Claim();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Claim", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Claim(Claim&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Claim", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Claim(Claim const&) = delete;

  /// @brief Field m_issuer, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_issuer;

  /// @brief Field m_originalIssuer, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_originalIssuer;

  /// @brief Field m_type, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_type;

  /// @brief Field m_value, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_value;

  /// @brief Field m_valueType, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_valueType;

  /// @brief Field m_userSerializationData, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_userSerializationData;

  /// @brief Field m_properties, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___m_properties;

  /// @brief Field m_propertyLock, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ___m_propertyLock;

  /// @brief Field m_subject, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Claims::ClaimsIdentity* ___m_subject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Claims::Claim, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_issuer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_originalIssuer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_valueType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_userSerializationData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_properties) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_propertyLock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::Claim, ___m_subject) == 0x50, "Offset mismatch!");

} // namespace System::Security::Claims
NEED_NO_BOX(::System::Security::Claims::Claim);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::Claim*, "System.Security.Claims", "Claim");
