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
struct __UISystemProfilerApi__SampleType;
}
// Forward declare root types
namespace UnityEngine {
struct __UISystemProfilerApi__SampleType;
}
namespace UnityEngine {
class UISystemProfilerApi;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__UISystemProfilerApi__SampleType);
MARK_REF_PTR_T(::UnityEngine::UISystemProfilerApi);
// Type: ::SampleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UISystemProfilerApi::SampleType
struct CORDL_TYPE __UISystemProfilerApi__SampleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UISystemProfilerApi__SampleType_Unwrapped
  enum struct ____UISystemProfilerApi__SampleType_Unwrapped : int32_t {
    __E_Layout = static_cast<int32_t>(0x0),
    __E_Render = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UISystemProfilerApi__SampleType_Unwrapped() const noexcept {
    return static_cast<____UISystemProfilerApi__SampleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UISystemProfilerApi__SampleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UISystemProfilerApi__SampleType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Layout value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__UISystemProfilerApi__SampleType const Layout;

  /// @brief Field Render value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__UISystemProfilerApi__SampleType const Render;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__UISystemProfilerApi__SampleType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__UISystemProfilerApi__SampleType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::UISystemProfilerApi
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::UISystemProfilerApi*
class CORDL_TYPE UISystemProfilerApi : public ::System::Object {
public:
  // Declarations
  using SampleType = ::UnityEngine::__UISystemProfilerApi__SampleType;

  /// @brief Method AddMarker, addr 0x35ff588, size 0x44, virtual false, abstract: false, final false
  static inline void AddMarker(::StringW name, ::UnityEngine::Object* obj);

  /// @brief Method BeginSample, addr 0x35ff510, size 0x3c, virtual false, abstract: false, final false
  static inline void BeginSample(::UnityEngine::__UISystemProfilerApi__SampleType type);

  /// @brief Method EndSample, addr 0x35ff54c, size 0x3c, virtual false, abstract: false, final false
  static inline void EndSample(::UnityEngine::__UISystemProfilerApi__SampleType type);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UISystemProfilerApi, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__UISystemProfilerApi__SampleType, "UnityEngine", "UISystemProfilerApi/SampleType");
NEED_NO_BOX(::UnityEngine::UISystemProfilerApi);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UISystemProfilerApi*, "UnityEngine", "UISystemProfilerApi");
