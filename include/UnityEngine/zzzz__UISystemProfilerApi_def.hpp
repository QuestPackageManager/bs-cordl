#pragma once
// IWYU pragma private; include "UnityEngine/UISystemProfilerApi.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UISystemProfilerApi)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct UISystemProfilerApi_SampleType;
}
// Forward declare root types
namespace UnityEngine {
struct UISystemProfilerApi_SampleType;
}
namespace UnityEngine {
class UISystemProfilerApi;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UISystemProfilerApi_SampleType);
MARK_REF_PTR_T(::UnityEngine::UISystemProfilerApi);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.UISystemProfilerApi/SampleType
struct CORDL_TYPE UISystemProfilerApi_SampleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UISystemProfilerApi_SampleType_Unwrapped
  enum struct __UISystemProfilerApi_SampleType_Unwrapped : int32_t {
    __E_Layout = static_cast<int32_t>(0x0),
    __E_Render = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UISystemProfilerApi_SampleType_Unwrapped() const noexcept {
    return static_cast<__UISystemProfilerApi_SampleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UISystemProfilerApi_SampleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UISystemProfilerApi_SampleType(int32_t value__) noexcept;

  /// @brief Field Layout value: I32(0)
  static ::UnityEngine::UISystemProfilerApi_SampleType const Layout;

  /// @brief Field Render value: I32(1)
  static ::UnityEngine::UISystemProfilerApi_SampleType const Render;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18344 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UISystemProfilerApi_SampleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UISystemProfilerApi_SampleType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UISystemProfilerApi
class CORDL_TYPE UISystemProfilerApi : public ::System::Object {
public:
  // Declarations
  using SampleType = ::UnityEngine::UISystemProfilerApi_SampleType;

  /// @brief Method AddMarker, addr 0x4aad648, size 0x44, virtual false, abstract: false, final false
  static inline void AddMarker(::StringW name, ::UnityEngine::Object* obj);

  /// @brief Method BeginSample, addr 0x4aad5d0, size 0x3c, virtual false, abstract: false, final false
  static inline void BeginSample(::UnityEngine::UISystemProfilerApi_SampleType type);

  /// @brief Method EndSample, addr 0x4aad60c, size 0x3c, virtual false, abstract: false, final false
  static inline void EndSample(::UnityEngine::UISystemProfilerApi_SampleType type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UISystemProfilerApi();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UISystemProfilerApi", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UISystemProfilerApi(UISystemProfilerApi&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UISystemProfilerApi", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UISystemProfilerApi(UISystemProfilerApi const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UISystemProfilerApi, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UISystemProfilerApi_SampleType, "UnityEngine", "UISystemProfilerApi/SampleType");
NEED_NO_BOX(::UnityEngine::UISystemProfilerApi);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UISystemProfilerApi*, "UnityEngine", "UISystemProfilerApi");
