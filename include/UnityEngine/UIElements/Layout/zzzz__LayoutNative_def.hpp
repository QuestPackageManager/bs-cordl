#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutNative)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements::Layout {
class LayoutNative_LayoutLogData;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNative_LayoutLogEventType;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutNative_LayoutLogEventType;
}
namespace UnityEngine::UIElements::Layout {
class LayoutNative;
}
namespace UnityEngine::UIElements::Layout {
class LayoutNative_LayoutLogData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType);
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutNative);
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutNative/LayoutLogEventType
struct CORDL_TYPE LayoutNative_LayoutLogEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutNative_LayoutLogEventType_Unwrapped
  enum struct __LayoutNative_LayoutLogEventType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Error = static_cast<int32_t>(0x1),
    __E_Measure = static_cast<int32_t>(0x2),
    __E_Layout = static_cast<int32_t>(0x3),
    __E_CacheUsage = static_cast<int32_t>(0x4),
    __E_BeginLayout = static_cast<int32_t>(0x5),
    __E_EndLayout = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutNative_LayoutLogEventType_Unwrapped() const noexcept {
    return static_cast<__LayoutNative_LayoutLogEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutNative_LayoutLogEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutNative_LayoutLogEventType(int32_t value__) noexcept;

  /// @brief Field BeginLayout value: I32(5)
  static ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const BeginLayout;

  /// @brief Field CacheUsage value: I32(4)
  static ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const CacheUsage;

  /// @brief Field EndLayout value: I32(6)
  static ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const EndLayout;

  /// @brief Field Error value: I32(1)
  static ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const Error;

  /// @brief Field Layout value: I32(3)
  static ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const Layout;

  /// @brief Field Measure value: I32(2)
  static ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const Measure;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5439 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies System.Object, UnityEngine.UIElements.Layout.LayoutNative::LayoutLogEventType, UnityEngine.UIElements.Layout.LayoutNode
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutNative/LayoutLogData
class CORDL_TYPE LayoutNative_LayoutLogData : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_eventType, put = __cordl_internal_set_eventType)) ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType eventType;

  /// @brief Field message, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message)) ::StringW message;

  /// @brief Field node, offset 0x10, size 0x30
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::UIElements::Layout::LayoutNode node;

  static inline ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData* New_ctor();

  constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const& __cordl_internal_get_eventType() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType& __cordl_internal_get_eventType();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr ::UnityEngine::UIElements::Layout::LayoutNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutNode& __cordl_internal_get_node();

  constexpr void __cordl_internal_set_eventType(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType value);

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_node(::UnityEngine::UIElements::Layout::LayoutNode value);

  /// @brief Method .ctor, addr 0x6b38534, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutNative_LayoutLogData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutNative_LayoutLogData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutNative_LayoutLogData(LayoutNative_LayoutLogData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutNative_LayoutLogData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutNative_LayoutLogData(LayoutNative_LayoutLogData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5440 };

  /// @brief Field node, offset: 0x10, size: 0x30, def value: None
  ::UnityEngine::UIElements::Layout::LayoutNode ___node;

  /// @brief Field eventType, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType ___eventType;

  /// @brief Field message, offset: 0x48, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData, ___node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData, ___eventType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData, ___message) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
// Dependencies System.Object
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutNative
class CORDL_TYPE LayoutNative : public ::System::Object {
public:
  // Declarations
  using LayoutLogData = ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData;

  using LayoutLogEventType = ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType;

  /// @brief Field onLayoutLog, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onLayoutLog, put = setStaticF_onLayoutLog)) ::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* onLayoutLog;

  /// @brief Method CalculateLayout, addr 0x6b3840c, size 0x74, virtual false, abstract: false, final false
  static inline void CalculateLayout(::System::IntPtr node, float_t parentWidth, float_t parentHeight, int32_t parentDirection, ::System::IntPtr state, ::System::IntPtr exceptionGCHandle);

  /// @brief Method LayoutLog_Internal, addr 0x6b38480, size 0xb4, virtual false, abstract: false, final false
  static inline void LayoutLog_Internal(::System::IntPtr nodePtr, ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType type, ::StringW message);

  static inline ::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* getStaticF_onLayoutLog();

  static inline void setStaticF_onLayoutLog(::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutNative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutNative(LayoutNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutNative(LayoutNative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutNative, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType, "UnityEngine.UIElements.Layout", "LayoutNative/LayoutLogEventType");
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutNative*, "UnityEngine.UIElements.Layout", "LayoutNative");
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*, "UnityEngine.UIElements.Layout", "LayoutNative/LayoutLogData");
