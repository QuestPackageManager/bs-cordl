#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Initialization/AddressablesRuntimeProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesRuntimeProperties)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class AddressablesRuntimeProperties;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties);
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Initialization.AddressablesRuntimeProperties
class CORDL_TYPE AddressablesRuntimeProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_CachedValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CachedValues, put = setStaticF_s_CachedValues)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_CachedValues;

  /// @brief Field s_StaticStacksAreInUse, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_StaticStacksAreInUse, put = setStaticF_s_StaticStacksAreInUse)) bool s_StaticStacksAreInUse;

  /// @brief Field s_TokenStack, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TokenStack, put = setStaticF_s_TokenStack)) ::System::Collections::Generic::Stack_1<::StringW>* s_TokenStack;

  /// @brief Field s_TokenStartStack, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TokenStartStack, put = setStaticF_s_TokenStartStack)) ::System::Collections::Generic::Stack_1<int32_t>* s_TokenStartStack;

  /// @brief Method ClearCachedPropertyValues, addr 0x62b5ad4, size 0x80, virtual false, abstract: false, final false
  static inline void ClearCachedPropertyValues();

  /// @brief Method EvaluateProperty, addr 0x62b5b54, size 0x3dc, virtual false, abstract: false, final false
  static inline ::StringW EvaluateProperty(::StringW name);

  /// @brief Method EvaluateString, addr 0x62a1848, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW EvaluateString(::StringW inputString);

  /// @brief Method EvaluateString, addr 0x62b64f0, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW EvaluateString(::StringW inputString, char16_t startDelimiter, char16_t endDelimiter, ::System::Func_2<::StringW, ::StringW>* varFunc);

  /// @brief Method EvaluateStringInternal, addr 0x62b5f30, size 0x5c0, virtual false, abstract: false, final false
  static inline ::StringW EvaluateStringInternal(::StringW inputString, char16_t startDelimiter, char16_t endDelimiter, ::System::Func_2<::StringW, ::StringW>* varFunc);

  /// @brief Method GetAssemblies, addr 0x62b598c, size 0x1c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetAssemblies();

  /// @brief Method GetCachedValueCount, addr 0x62b59a8, size 0x84, virtual false, abstract: false, final false
  static inline int32_t GetCachedValueCount();

  /// @brief Method SetPropertyValue, addr 0x62b5a2c, size 0xa8, virtual false, abstract: false, final false
  static inline void SetPropertyValue(::StringW name, ::StringW val);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_CachedValues();

  static inline bool getStaticF_s_StaticStacksAreInUse();

  static inline ::System::Collections::Generic::Stack_1<::StringW>* getStaticF_s_TokenStack();

  static inline ::System::Collections::Generic::Stack_1<int32_t>* getStaticF_s_TokenStartStack();

  static inline void setStaticF_s_CachedValues(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_StaticStacksAreInUse(bool value);

  static inline void setStaticF_s_TokenStack(::System::Collections::Generic::Stack_1<::StringW>* value);

  static inline void setStaticF_s_TokenStartStack(::System::Collections::Generic::Stack_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesRuntimeProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddressablesRuntimeProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesRuntimeProperties(AddressablesRuntimeProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesRuntimeProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesRuntimeProperties(AddressablesRuntimeProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*, "UnityEngine.AddressableAssets.Initialization", "AddressablesRuntimeProperties");
