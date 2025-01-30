#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassNonLightPass)
namespace GlobalNamespace {
struct BloomPrePassNonLightPass_ExecutionTimeType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct BloomPrePassNonLightPass_ExecutionTimeType;
}
namespace GlobalNamespace {
class BloomPrePassNonLightPass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassNonLightPass);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BloomPrePassNonLightPass/ExecutionTimeType
struct CORDL_TYPE BloomPrePassNonLightPass_ExecutionTimeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BloomPrePassNonLightPass_ExecutionTimeType_Unwrapped
  enum struct __BloomPrePassNonLightPass_ExecutionTimeType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_BeforeBlur = static_cast<int32_t>(0x1),
    __E_AfterBlur = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BloomPrePassNonLightPass_ExecutionTimeType_Unwrapped() const noexcept {
    return static_cast<__BloomPrePassNonLightPass_ExecutionTimeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassNonLightPass_ExecutionTimeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BloomPrePassNonLightPass_ExecutionTimeType(int32_t value__) noexcept;

  /// @brief Field AfterBlur value: I32(2)
  static ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType const AfterBlur;

  /// @brief Field BeforeBlur value: I32(1)
  static ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType const BeforeBlur;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16258 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePassNonLightPass::ExecutionTimeType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassNonLightPass
class CORDL_TYPE BloomPrePassNonLightPass : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ExecutionTimeType = ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType;

  /// @brief Field _bloomPrePassAfterBlurList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__bloomPrePassAfterBlurList,
                      put = setStaticF__bloomPrePassAfterBlurList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* _bloomPrePassAfterBlurList;

  /// @brief Field _bloomPrePassBeforeBlurList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__bloomPrePassBeforeBlurList,
                      put = setStaticF__bloomPrePassBeforeBlurList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* _bloomPrePassBeforeBlurList;

  /// @brief Field _executionTimeType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__executionTimeType, put = __cordl_internal_set__executionTimeType)) ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType _executionTimeType;

  /// @brief Field _registeredExecutionTimeType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__registeredExecutionTimeType,
                      put = __cordl_internal_set__registeredExecutionTimeType)) ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType _registeredExecutionTimeType;

  __declspec(property(get = get_executionTimeType)) ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType executionTimeType;

  static inline ::GlobalNamespace::BloomPrePassNonLightPass* New_ctor();

  /// @brief Method OnDisable, addr 0x39dc134, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39da9cc, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x39db528, size 0x2c, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Register, addr 0x39d98c0, size 0x128, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method Render, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  /// @brief Method Unregister, addr 0x39d9a74, size 0xc4, virtual false, abstract: false, final false
  inline void Unregister();

  constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType const& __cordl_internal_get__executionTimeType() const;

  constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType& __cordl_internal_get__executionTimeType();

  constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType const& __cordl_internal_get__registeredExecutionTimeType() const;

  constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType& __cordl_internal_get__registeredExecutionTimeType();

  constexpr void __cordl_internal_set__executionTimeType(::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType value);

  constexpr void __cordl_internal_set__registeredExecutionTimeType(::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType value);

  /// @brief Method .ctor, addr 0x39d9508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* getStaticF__bloomPrePassAfterBlurList();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* getStaticF__bloomPrePassBeforeBlurList();

  /// @brief Method get_bloomPrePassAfterBlurList, addr 0x39dc084, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* get_bloomPrePassAfterBlurList();

  /// @brief Method get_bloomPrePassBeforeBlurList, addr 0x39dc0dc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* get_bloomPrePassBeforeBlurList();

  /// @brief Method get_executionTimeType, addr 0x39dc07c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType get_executionTimeType();

  static inline void setStaticF__bloomPrePassAfterBlurList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* value);

  static inline void setStaticF__bloomPrePassBeforeBlurList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassNonLightPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassNonLightPass(BloomPrePassNonLightPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassNonLightPass(BloomPrePassNonLightPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16259 };

  /// @brief Field _executionTimeType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType ____executionTimeType;

  /// @brief Field _registeredExecutionTimeType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType ____registeredExecutionTimeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassNonLightPass, ____executionTimeType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassNonLightPass, ____registeredExecutionTimeType) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassNonLightPass, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType, "", "BloomPrePassNonLightPass/ExecutionTimeType");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassNonLightPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassNonLightPass*, "", "BloomPrePassNonLightPass");
