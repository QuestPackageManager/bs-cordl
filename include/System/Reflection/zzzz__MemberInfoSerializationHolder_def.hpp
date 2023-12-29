#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemberInfoSerializationHolder)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class MemberInfoSerializationHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MemberInfoSerializationHolder);
// Type: System.Reflection::MemberInfoSerializationHolder
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3470)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3504))
// CS Name: ::System.Reflection::MemberInfoSerializationHolder*
class CORDL_TYPE MemberInfoSerializationHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_memberName, offset 0x10, size 0x8
  __declspec(property(get = __get_m_memberName, put = __set_m_memberName))::StringW m_memberName;

  /// @brief Field m_reflectedType, offset 0x18, size 0x8
  __declspec(property(get = __get_m_reflectedType, put = __set_m_reflectedType))::System::RuntimeType* m_reflectedType;

  /// @brief Field m_signature, offset 0x20, size 0x8
  __declspec(property(get = __get_m_signature, put = __set_m_signature))::StringW m_signature;

  /// @brief Field m_signature2, offset 0x28, size 0x8
  __declspec(property(get = __get_m_signature2, put = __set_m_signature2))::StringW m_signature2;

  /// @brief Field m_memberType, offset 0x30, size 0x4
  __declspec(property(get = __get_m_memberType, put = __set_m_memberType))::System::Reflection::MemberTypes m_memberType;

  /// @brief Field m_info, offset 0x38, size 0x8
  __declspec(property(get = __get_m_info, put = __set_m_info))::System::Runtime::Serialization::SerializationInfo* m_info;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  constexpr ::StringW& __get_m_memberName();

  constexpr ::StringW const& __get_m_memberName() const;

  constexpr void __set_m_memberName(::StringW value);

  constexpr ::System::RuntimeType*& __get_m_reflectedType();

  constexpr ::cordl_internals::to_const_pointer<::System::RuntimeType*> const& __get_m_reflectedType() const;

  constexpr void __set_m_reflectedType(::System::RuntimeType* value);

  constexpr ::StringW& __get_m_signature();

  constexpr ::StringW const& __get_m_signature() const;

  constexpr void __set_m_signature(::StringW value);

  constexpr ::StringW& __get_m_signature2();

  constexpr ::StringW const& __get_m_signature2() const;

  constexpr void __set_m_signature2(::StringW value);

  constexpr ::System::Reflection::MemberTypes& __get_m_memberType();

  constexpr ::System::Reflection::MemberTypes const& __get_m_memberType() const;

  constexpr void __set_m_memberType(::System::Reflection::MemberTypes value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __get_m_info();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __get_m_info() const;

  constexpr void __set_m_info(::System::Runtime::Serialization::SerializationInfo* value);

  /// @brief Method GetSerializationInfo addr 0x2394434 size 0x10 virtual false final false
  static inline void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass, ::StringW signature,
                                          ::System::Reflection::MemberTypes type);

  /// @brief Method GetSerializationInfo addr 0x2394444 size 0x314 virtual false final false
  static inline void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass, ::StringW signature, ::StringW signature2,
                                          ::System::Reflection::MemberTypes type, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> genericArguments);

  static inline ::System::Reflection::MemberInfoSerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2394758 size 0x324 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData addr 0x2394a7c size 0x60 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject addr 0x2394adc size 0x808 virtual true final false
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberInfoSerializationHolder(MemberInfoSerializationHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberInfoSerializationHolder(MemberInfoSerializationHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberInfoSerializationHolder();

public:
  /// @brief Field m_memberName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_memberName;

  /// @brief Field m_reflectedType, offset: 0x18, size: 0x8, def value: None
  ::System::RuntimeType* ___m_reflectedType;

  /// @brief Field m_signature, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_signature;

  /// @brief Field m_signature2, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_signature2;

  /// @brief Field m_memberType, offset: 0x30, size: 0x4, def value: None
  ::System::Reflection::MemberTypes ___m_memberType;

  /// @brief Field m_info, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ___m_info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MemberInfoSerializationHolder, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_memberName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_reflectedType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_signature) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_signature2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_memberType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_info) == 0x38, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MemberInfoSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfoSerializationHolder*, "System.Reflection", "MemberInfoSerializationHolder");
