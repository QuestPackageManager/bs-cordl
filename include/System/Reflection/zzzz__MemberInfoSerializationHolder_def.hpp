#pragma once
// IWYU pragma private; include "System/Reflection/MemberInfoSerializationHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemberInfoSerializationHolder)
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
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
// Dependencies System.Object, System.Reflection.MemberTypes, System.Runtime.Serialization.IObjectReference, System.Runtime.Serialization.ISerializable
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.MemberInfoSerializationHolder
class CORDL_TYPE MemberInfoSerializationHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_info, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_info, put = __cordl_internal_set_m_info)) ::System::Runtime::Serialization::SerializationInfo* m_info;

  /// @brief Field m_memberName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_memberName, put = __cordl_internal_set_m_memberName)) ::StringW m_memberName;

  /// @brief Field m_memberType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_memberType, put = __cordl_internal_set_m_memberType)) ::System::Reflection::MemberTypes m_memberType;

  /// @brief Field m_reflectedType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_reflectedType, put = __cordl_internal_set_m_reflectedType)) ::System::RuntimeType* m_reflectedType;

  /// @brief Field m_signature, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_signature, put = __cordl_internal_set_m_signature)) ::StringW m_signature;

  /// @brief Field m_signature2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_signature2, put = __cordl_internal_set_m_signature2)) ::StringW m_signature2;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x3d2a8f0, size 0x58, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject, addr 0x3d2a948, size 0x800, virtual true, abstract: false, final false
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetSerializationInfo, addr 0x3d2a2c8, size 0x310, virtual false, abstract: false, final false
  static inline void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass, ::StringW signature, ::StringW signature2,
                                          ::System::Reflection::MemberTypes type, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> genericArguments);

  /// @brief Method GetSerializationInfo, addr 0x3d2a2b8, size 0x10, virtual false, abstract: false, final false
  static inline void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass, ::StringW signature,
                                          ::System::Reflection::MemberTypes type);

  static inline ::System::Reflection::MemberInfoSerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::System::Runtime::Serialization::SerializationInfo* const& __cordl_internal_get_m_info() const;

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get_m_info();

  constexpr ::StringW const& __cordl_internal_get_m_memberName() const;

  constexpr ::StringW& __cordl_internal_get_m_memberName();

  constexpr ::System::Reflection::MemberTypes const& __cordl_internal_get_m_memberType() const;

  constexpr ::System::Reflection::MemberTypes& __cordl_internal_get_m_memberType();

  constexpr ::System::RuntimeType* const& __cordl_internal_get_m_reflectedType() const;

  constexpr ::System::RuntimeType*& __cordl_internal_get_m_reflectedType();

  constexpr ::StringW const& __cordl_internal_get_m_signature() const;

  constexpr ::StringW& __cordl_internal_get_m_signature();

  constexpr ::StringW const& __cordl_internal_get_m_signature2() const;

  constexpr ::StringW& __cordl_internal_get_m_signature2();

  constexpr void __cordl_internal_set_m_info(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set_m_memberName(::StringW value);

  constexpr void __cordl_internal_set_m_memberType(::System::Reflection::MemberTypes value);

  constexpr void __cordl_internal_set_m_reflectedType(::System::RuntimeType* value);

  constexpr void __cordl_internal_set_m_signature(::StringW value);

  constexpr void __cordl_internal_set_m_signature2(::StringW value);

  /// @brief Method .ctor, addr 0x3d2a5d8, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberInfoSerializationHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberInfoSerializationHolder(MemberInfoSerializationHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberInfoSerializationHolder(MemberInfoSerializationHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3512 };

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
static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_memberName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_reflectedType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_signature) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_signature2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_memberType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MemberInfoSerializationHolder, ___m_info) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::MemberInfoSerializationHolder, 0x40>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MemberInfoSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfoSerializationHolder*, "System.Reflection", "MemberInfoSerializationHolder");
