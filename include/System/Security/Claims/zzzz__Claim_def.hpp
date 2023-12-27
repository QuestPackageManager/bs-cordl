#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Claim)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3008))
// CS Name: ::System.Security.Claims::Claim*
class CORDL_TYPE Claim : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_issuer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_issuer, put = __set_m_issuer))::StringW m_issuer;

  /// @brief Field m_originalIssuer, offset 0x18, size 0x8
  __declspec(property(get = __get_m_originalIssuer, put = __set_m_originalIssuer))::StringW m_originalIssuer;

  /// @brief Field m_type, offset 0x20, size 0x8
  __declspec(property(get = __get_m_type, put = __set_m_type))::StringW m_type;

  /// @brief Field m_value, offset 0x28, size 0x8
  __declspec(property(get = __get_m_value, put = __set_m_value))::StringW m_value;

  /// @brief Field m_valueType, offset 0x30, size 0x8
  __declspec(property(get = __get_m_valueType, put = __set_m_valueType))::StringW m_valueType;

  /// @brief Field m_userSerializationData, offset 0x38, size 0x8
  __declspec(property(get = __get_m_userSerializationData, put = __set_m_userSerializationData))::ArrayW<uint8_t, ::Array<uint8_t>*> m_userSerializationData;

  /// @brief Field m_properties, offset 0x40, size 0x8
  __declspec(property(get = __get_m_properties, put = __set_m_properties))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* m_properties;

  /// @brief Field m_propertyLock, offset 0x48, size 0x8
  __declspec(property(get = __get_m_propertyLock, put = __set_m_propertyLock))::System::Object* m_propertyLock;

  /// @brief Field m_subject, offset 0x50, size 0x8
  __declspec(property(get = __get_m_subject, put = __set_m_subject))::System::Security::Claims::ClaimsIdentity* m_subject;

  __declspec(property(get = get_Properties))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Properties;

  __declspec(property(get = get_Subject, put = set_Subject))::System::Security::Claims::ClaimsIdentity* Subject;

  __declspec(property(get = get_Type))::StringW Type;

  __declspec(property(get = get_Value))::StringW Value;

  constexpr ::StringW& __get_m_issuer();

  constexpr ::StringW const& __get_m_issuer() const;

  constexpr void __set_m_issuer(::StringW value);

  constexpr ::StringW& __get_m_originalIssuer();

  constexpr ::StringW const& __get_m_originalIssuer() const;

  constexpr void __set_m_originalIssuer(::StringW value);

  constexpr ::StringW& __get_m_type();

  constexpr ::StringW const& __get_m_type() const;

  constexpr void __set_m_type(::StringW value);

  constexpr ::StringW& __get_m_value();

  constexpr ::StringW const& __get_m_value() const;

  constexpr void __set_m_value(::StringW value);

  constexpr ::StringW& __get_m_valueType();

  constexpr ::StringW const& __get_m_valueType() const;

  constexpr void __set_m_valueType(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m_userSerializationData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m_userSerializationData() const;

  constexpr void __set_m_userSerializationData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __get_m_properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __get_m_properties() const;

  constexpr void __set_m_properties(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr ::System::Object*& __get_m_propertyLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_propertyLock() const;

  constexpr void __set_m_propertyLock(::System::Object* value);

  constexpr ::System::Security::Claims::ClaimsIdentity*& __get_m_subject();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Claims::ClaimsIdentity*> const& __get_m_subject() const;

  constexpr void __set_m_subject(::System::Security::Claims::ClaimsIdentity* value);

  static inline ::System::Security::Claims::Claim* New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                            ::System::Security::Claims::ClaimsIdentity* subject);

  /// @brief Method .ctor addr 0x2476a20 size 0x20 virtual false final false
  inline void _ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject);

  static inline ::System::Security::Claims::Claim* New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                            ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey, ::StringW propertyValue);

  /// @brief Method .ctor addr 0x247b774 size 0x258 virtual false final false
  inline void _ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey,
                    ::StringW propertyValue);

  static inline ::System::Security::Claims::Claim* New_ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject);

  /// @brief Method .ctor addr 0x247bb04 size 0x314 virtual false final false
  inline void _ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject);

  /// @brief Method OnDeserializedMethod addr 0x247be18 size 0x60 virtual false final false
  inline void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Properties addr 0x247b9cc size 0x138 virtual false final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Properties();

  /// @brief Method get_Subject addr 0x247be78 size 0x8 virtual false final false
  inline ::System::Security::Claims::ClaimsIdentity* get_Subject();

  /// @brief Method set_Subject addr 0x247be80 size 0x8 virtual false final false
  inline void set_Subject(::System::Security::Claims::ClaimsIdentity* value);

  /// @brief Method get_Type addr 0x247be88 size 0x8 virtual false final false
  inline ::StringW get_Type();

  /// @brief Method get_Value addr 0x247be90 size 0x8 virtual false final false
  inline ::StringW get_Value();

  /// @brief Method Clone addr 0x247be98 size 0x70 virtual true final false
  inline ::System::Security::Claims::Claim* Clone(::System::Security::Claims::ClaimsIdentity* identity);

  /// @brief Method ToString addr 0x247bf08 size 0x78 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Claim", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Claim(Claim&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Claim", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Claim(Claim const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Claim();

public:
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

} // namespace System::Security::Claims
NEED_NO_BOX(::System::Security::Claims::Claim);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::Claim*, "System.Security.Claims", "Claim");
