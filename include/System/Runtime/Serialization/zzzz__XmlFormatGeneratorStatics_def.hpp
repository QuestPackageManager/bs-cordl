#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatGeneratorStatics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlFormatGeneratorStatics)
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlFormatGeneratorStatics;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatGeneratorStatics);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatGeneratorStatics
class CORDL_TYPE XmlFormatGeneratorStatics : public ::System::Object {
public:
  // Declarations
  /// @brief Field boxPointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_boxPointer, put = setStaticF_boxPointer)) ::System::Reflection::MethodInfo* boxPointer;

  /// @brief Field ensureArraySizeMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ensureArraySizeMethod, put = setStaticF_ensureArraySizeMethod)) ::System::Reflection::MethodInfo* ensureArraySizeMethod;

  /// @brief Field extensionDataSetExplicitMethodInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_extensionDataSetExplicitMethodInfo, put = setStaticF_extensionDataSetExplicitMethodInfo)) ::System::Reflection::MethodInfo* extensionDataSetExplicitMethodInfo;

  /// @brief Field getDefaultValueMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_getDefaultValueMethod, put = setStaticF_getDefaultValueMethod)) ::System::Reflection::MethodInfo* getDefaultValueMethod;

  /// @brief Field getHasValueMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_getHasValueMethod, put = setStaticF_getHasValueMethod)) ::System::Reflection::MethodInfo* getHasValueMethod;

  /// @brief Field getNullableValueMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_getNullableValueMethod, put = setStaticF_getNullableValueMethod)) ::System::Reflection::MethodInfo* getNullableValueMethod;

  /// @brief Field hashtableCtor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hashtableCtor, put = setStaticF_hashtableCtor)) ::System::Reflection::ConstructorInfo* hashtableCtor;

  /// @brief Field ienumeratorGetCurrentMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ienumeratorGetCurrentMethod, put = setStaticF_ienumeratorGetCurrentMethod)) ::System::Reflection::MethodInfo* ienumeratorGetCurrentMethod;

  /// @brief Field ienumeratorMoveNextMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ienumeratorMoveNextMethod, put = setStaticF_ienumeratorMoveNextMethod)) ::System::Reflection::MethodInfo* ienumeratorMoveNextMethod;

  /// @brief Field incrementCollectionCountGenericMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_incrementCollectionCountGenericMethod,
                      put = setStaticF_incrementCollectionCountGenericMethod)) ::System::Reflection::MethodInfo* incrementCollectionCountGenericMethod;

  /// @brief Field incrementCollectionCountMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_incrementCollectionCountMethod, put = setStaticF_incrementCollectionCountMethod)) ::System::Reflection::MethodInfo* incrementCollectionCountMethod;

  /// @brief Field incrementItemCountMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_incrementItemCountMethod, put = setStaticF_incrementItemCountMethod)) ::System::Reflection::MethodInfo* incrementItemCountMethod;

  /// @brief Field trimArraySizeMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trimArraySizeMethod, put = setStaticF_trimArraySizeMethod)) ::System::Reflection::MethodInfo* trimArraySizeMethod;

  /// @brief Field unboxPointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_unboxPointer, put = setStaticF_unboxPointer)) ::System::Reflection::MethodInfo* unboxPointer;

  /// @brief Field writeNullMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_writeNullMethod, put = setStaticF_writeNullMethod)) ::System::Reflection::MethodInfo* writeNullMethod;

  static inline ::System::Reflection::MethodInfo* getStaticF_boxPointer();

  static inline ::System::Reflection::MethodInfo* getStaticF_ensureArraySizeMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_extensionDataSetExplicitMethodInfo();

  static inline ::System::Reflection::MethodInfo* getStaticF_getDefaultValueMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_getHasValueMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_getNullableValueMethod();

  static inline ::System::Reflection::ConstructorInfo* getStaticF_hashtableCtor();

  static inline ::System::Reflection::MethodInfo* getStaticF_ienumeratorGetCurrentMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_ienumeratorMoveNextMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_incrementCollectionCountGenericMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_incrementCollectionCountMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_incrementItemCountMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_trimArraySizeMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF_unboxPointer();

  static inline ::System::Reflection::MethodInfo* getStaticF_writeNullMethod();

  /// @brief Method get_BoxPointer, addr 0x5f4627c, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_BoxPointer();

  /// @brief Method get_EnsureArraySizeMethod, addr 0x5f46770, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_EnsureArraySizeMethod();

  /// @brief Method get_ExtensionDataSetExplicitMethodInfo, addr 0x5f46fd4, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_ExtensionDataSetExplicitMethodInfo();

  /// @brief Method get_GetCurrentMethod, addr 0x5f46410, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_GetCurrentMethod();

  /// @brief Method get_GetDefaultValueMethod, addr 0x5f46d7c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_GetDefaultValueMethod();

  /// @brief Method get_GetHasValueMethod, addr 0x5f46f0c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_GetHasValueMethod();

  /// @brief Method get_GetNullableValueMethod, addr 0x5f46e44, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_GetNullableValueMethod();

  /// @brief Method get_HashtableCtor, addr 0x5f465b0, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Reflection::ConstructorInfo* get_HashtableCtor();

  /// @brief Method get_IncrementCollectionCountGenericMethod, addr 0x5f46cb4, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_IncrementCollectionCountGenericMethod();

  /// @brief Method get_IncrementCollectionCountMethod, addr 0x5f46af0, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_IncrementCollectionCountMethod();

  /// @brief Method get_IncrementItemCountMethod, addr 0x5f466a8, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_IncrementItemCountMethod();

  /// @brief Method get_MoveNextMethod, addr 0x5f4634c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_MoveNextMethod();

  /// @brief Method get_TrimArraySizeMethod, addr 0x5f46838, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_TrimArraySizeMethod();

  /// @brief Method get_UnboxPointer, addr 0x5f464ec, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_UnboxPointer();

  /// @brief Method get_WriteNullMethod, addr 0x5f46900, size 0x1f0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_WriteNullMethod();

  static inline void setStaticF_boxPointer(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_ensureArraySizeMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_extensionDataSetExplicitMethodInfo(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_getDefaultValueMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_getHasValueMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_getNullableValueMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_hashtableCtor(::System::Reflection::ConstructorInfo* value);

  static inline void setStaticF_ienumeratorGetCurrentMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_ienumeratorMoveNextMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_incrementCollectionCountGenericMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_incrementCollectionCountMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_incrementItemCountMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_trimArraySizeMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_unboxPointer(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_writeNullMethod(::System::Reflection::MethodInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatGeneratorStatics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatGeneratorStatics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatGeneratorStatics(XmlFormatGeneratorStatics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatGeneratorStatics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatGeneratorStatics(XmlFormatGeneratorStatics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17075 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatGeneratorStatics, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatGeneratorStatics);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatGeneratorStatics*, "System.Runtime.Serialization", "XmlFormatGeneratorStatics");
