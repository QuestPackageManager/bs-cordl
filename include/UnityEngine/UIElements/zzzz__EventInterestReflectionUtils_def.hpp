#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestReflectionUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventInterestReflectionUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct EventCategory;
}
namespace UnityEngine::UIElements {
struct __EventInterestReflectionUtils__DefaultEventInterests;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventInterestReflectionUtils;
}
namespace UnityEngine::UIElements {
struct __EventInterestReflectionUtils__DefaultEventInterests;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventInterestReflectionUtils);
MARK_VAL_T(::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests);
// Type: ::DefaultEventInterests
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::EventInterestReflectionUtils::DefaultEventInterests
struct CORDL_TYPE __EventInterestReflectionUtils__DefaultEventInterests {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventInterestReflectionUtils__DefaultEventInterests();

  // Ctor Parameters [CppParam { name: "DefaultActionCategories", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DefaultActionAtTargetCategories", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr __EventInterestReflectionUtils__DefaultEventInterests(int32_t DefaultActionCategories, int32_t DefaultActionAtTargetCategories) noexcept;

  /// @brief Field DefaultActionCategories, offset: 0x0, size: 0x4, def value: None
  int32_t DefaultActionCategories;

  /// @brief Field DefaultActionAtTargetCategories, offset: 0x4, size: 0x4, def value: None
  int32_t DefaultActionAtTargetCategories;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6284 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests, DefaultActionCategories) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests, DefaultActionAtTargetCategories) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::EventInterestReflectionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::EventInterestReflectionUtils*
class CORDL_TYPE EventInterestReflectionUtils : public ::System::Object {
public:
  // Declarations
  using DefaultEventInterests = ::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests;

  /// @brief Field s_DefaultEventInterests, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultEventInterests, put = setStaticF_s_DefaultEventInterests)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests>* s_DefaultEventInterests;

  /// @brief Field s_EventCategories, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EventCategories,
                             put = setStaticF_s_EventCategories)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>* s_EventCategories;

  /// @brief Method ComputeDefaultEventInterests, addr 0x493736c, size 0x204, virtual false, abstract: false, final false
  static inline int32_t ComputeDefaultEventInterests(::System::Type* elementType, ::StringW methodName);

  /// @brief Method GetDefaultEventInterests, addr 0x4937140, size 0x22c, virtual false, abstract: false, final false
  static inline void GetDefaultEventInterests(::System::Type* elementType, ByRef<int32_t> defaultActionCategories, ByRef<int32_t> defaultActionAtTargetCategories);

  /// @brief Method GetEventCategory, addr 0x4937570, size 0x208, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventCategory GetEventCategory(::System::Type* eventType);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests>* getStaticF_s_DefaultEventInterests();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>* getStaticF_s_EventCategories();

  static inline void
  setStaticF_s_DefaultEventInterests(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests>* value);

  static inline void setStaticF_s_EventCategories(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventInterestReflectionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventInterestReflectionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventInterestReflectionUtils(EventInterestReflectionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventInterestReflectionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventInterestReflectionUtils(EventInterestReflectionUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6285 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventInterestReflectionUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventInterestReflectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventInterestReflectionUtils*, "UnityEngine.UIElements", "EventInterestReflectionUtils");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__EventInterestReflectionUtils__DefaultEventInterests, "UnityEngine.UIElements", "EventInterestReflectionUtils/DefaultEventInterests");
