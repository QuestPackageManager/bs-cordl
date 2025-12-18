#pragma once
// IWYU pragma private; include "System/UnitySerializationHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySerializationHolder)
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Runtime::Serialization {
class IObjectReference;
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
class Object;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class UnitySerializationHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::UnitySerializationHolder);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.UnitySerializationHolder
class CORDL_TYPE UnitySerializationHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_assemblyName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_assemblyName, put = __cordl_internal_set_m_assemblyName)) ::StringW m_assemblyName;

  /// @brief Field m_data, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_data, put = __cordl_internal_set_m_data)) ::StringW m_data;

  /// @brief Field m_declaringMethod, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_declaringMethod, put = __cordl_internal_set_m_declaringMethod)) ::System::Reflection::MethodBase* m_declaringMethod;

  /// @brief Field m_declaringType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_declaringType, put = __cordl_internal_set_m_declaringType)) ::System::Type* m_declaringType;

  /// @brief Field m_elementTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_elementTypes, put = __cordl_internal_set_m_elementTypes)) ::ArrayW<int32_t, ::Array<int32_t>*> m_elementTypes;

  /// @brief Field m_genericParameterPosition, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_genericParameterPosition, put = __cordl_internal_set_m_genericParameterPosition)) int32_t m_genericParameterPosition;

  /// @brief Field m_instantiation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_instantiation, put = __cordl_internal_set_m_instantiation)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> m_instantiation;

  /// @brief Field m_unityType, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_unityType, put = __cordl_internal_set_m_unityType)) int32_t m_unityType;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AddElementTypes, addr 0x5adad94, size 0x3f8, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* AddElementTypes(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type);

  /// @brief Method GetObjectData, addr 0x5adbd9c, size 0x50, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject, addr 0x5adbdec, size 0x544, virtual true, abstract: false, final false
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetUnitySerializationInfo, addr 0x5adb3a8, size 0x384, virtual false, abstract: false, final false
  static inline void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type);

  /// @brief Method GetUnitySerializationInfo, addr 0x5adb27c, size 0x12c, virtual false, abstract: false, final false
  static inline void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, int32_t unityType);

  /// @brief Method GetUnitySerializationInfo, addr 0x5adb72c, size 0x16c, virtual false, abstract: false, final false
  static inline void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, int32_t unityType, ::StringW data, ::System::Reflection::RuntimeAssembly* assembly);

  /// @brief Method MakeElementTypes, addr 0x5adb18c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Type* MakeElementTypes(::System::Type* type);

  static inline ::System::UnitySerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ThrowInsufficientInformation, addr 0x5adbc94, size 0x94, virtual false, abstract: false, final false
  inline void ThrowInsufficientInformation(::StringW field);

  constexpr ::StringW const& __cordl_internal_get_m_assemblyName() const;

  constexpr ::StringW& __cordl_internal_get_m_assemblyName();

  constexpr ::StringW const& __cordl_internal_get_m_data() const;

  constexpr ::StringW& __cordl_internal_get_m_data();

  constexpr ::System::Reflection::MethodBase* const& __cordl_internal_get_m_declaringMethod() const;

  constexpr ::System::Reflection::MethodBase*& __cordl_internal_get_m_declaringMethod();

  constexpr ::System::Type* const& __cordl_internal_get_m_declaringType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_declaringType();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_elementTypes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_elementTypes();

  constexpr int32_t const& __cordl_internal_get_m_genericParameterPosition() const;

  constexpr int32_t& __cordl_internal_get_m_genericParameterPosition();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_m_instantiation() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_m_instantiation();

  constexpr int32_t const& __cordl_internal_get_m_unityType() const;

  constexpr int32_t& __cordl_internal_get_m_unityType();

  constexpr void __cordl_internal_set_m_assemblyName(::StringW value);

  constexpr void __cordl_internal_set_m_data(::StringW value);

  constexpr void __cordl_internal_set_m_declaringMethod(::System::Reflection::MethodBase* value);

  constexpr void __cordl_internal_set_m_declaringType(::System::Type* value);

  constexpr void __cordl_internal_set_m_elementTypes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_genericParameterPosition(int32_t value);

  constexpr void __cordl_internal_set_m_instantiation(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_m_unityType(int32_t value);

  /// @brief Method .ctor, addr 0x5adb898, size 0x3fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnitySerializationHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnitySerializationHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnitySerializationHolder(UnitySerializationHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnitySerializationHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnitySerializationHolder(UnitySerializationHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2584 };

  /// @brief Field m_instantiation, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___m_instantiation;

  /// @brief Field m_elementTypes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_elementTypes;

  /// @brief Field m_genericParameterPosition, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_genericParameterPosition;

  /// @brief Field m_declaringType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___m_declaringType;

  /// @brief Field m_declaringMethod, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ___m_declaringMethod;

  /// @brief Field m_data, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_data;

  /// @brief Field m_assemblyName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_assemblyName;

  /// @brief Field m_unityType, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_unityType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::UnitySerializationHolder, ___m_instantiation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::UnitySerializationHolder, ___m_elementTypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::UnitySerializationHolder, ___m_genericParameterPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::UnitySerializationHolder, ___m_declaringType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::UnitySerializationHolder, ___m_declaringMethod) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::UnitySerializationHolder, ___m_data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::UnitySerializationHolder, ___m_assemblyName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::UnitySerializationHolder, ___m_unityType) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UnitySerializationHolder, 0x50>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UnitySerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::UnitySerializationHolder*, "System", "UnitySerializationHolder");
