#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ConverterGroups.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConverterGroups)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Delegate;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class ConverterGroup;
}
namespace UnityEngine::UIElements {
struct ConverterGroups_Unsafe;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ConverterGroups;
}
namespace UnityEngine::UIElements {
struct ConverterGroups_Unsafe;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ConverterGroups*);
MARK_VAL_T(::UnityEngine::UIElements::ConverterGroups_Unsafe);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ConverterGroups*, "UnityEngine.UIElements", "ConverterGroups");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ConverterGroups_Unsafe, "UnityEngine.UIElements", "ConverterGroups/Unsafe");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ConverterGroups/Unsafe
#pragma pack(push, 0)
struct CORDL_TYPE ConverterGroups_Unsafe {
public:
  // Declarations
  /// @brief Method LazyRegisterGlobal, addr 0x7088114, size 0xb0, virtual false, abstract: false, final false
  static inline void LazyRegisterGlobal(::System::Type* source, ::System::Type* destination, ::System::Func_1<::System::Delegate*>* converterDelegate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterGroups_Unsafe();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4033 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ConverterGroups_Unsafe) == 0x1, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ConverterGroups
class CORDL_TYPE ConverterGroups : public ::System::Object {
public:
  // Declarations
  using Unsafe = ::UnityEngine::UIElements::ConverterGroups_Unsafe;

  /// @brief Field s_BindingConverterGroups, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BindingConverterGroups,
                      put = setStaticF_s_BindingConverterGroups)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* s_BindingConverterGroups;

  /// @brief Field s_GlobalConverters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlobalConverters, put = setStaticF_s_GlobalConverters)) ::UnityEngine::UIElements::ConverterGroup* s_GlobalConverters;

  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvert(::by_ref<TSource> source, ::by_ref<TDestination> destination);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* getStaticF_s_BindingConverterGroups();

  static inline ::UnityEngine::UIElements::ConverterGroup* getStaticF_s_GlobalConverters();

  static inline void setStaticF_s_BindingConverterGroups(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* value);

  static inline void setStaticF_s_GlobalConverters(::UnityEngine::UIElements::ConverterGroup* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterGroups();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroups", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConverterGroups(ConverterGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroups", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConverterGroups(ConverterGroups const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4034 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ConverterGroups) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
