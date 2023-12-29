#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassNonLightPass)
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
struct __BloomPrePassNonLightPass__ExecutionTimeType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BloomPrePassNonLightPass__ExecutionTimeType;
}
namespace GlobalNamespace {
class BloomPrePassNonLightPass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassNonLightPass);
// Type: ::ExecutionTimeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14695))
// CS Name: ::BloomPrePassNonLightPass::ExecutionTimeType
struct CORDL_TYPE __BloomPrePassNonLightPass__ExecutionTimeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped
  enum struct ____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_BeforeBlur = static_cast<int32_t>(0x1),
    __E_AfterBlur = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped() const noexcept {
    return static_cast<____BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BloomPrePassNonLightPass__ExecutionTimeType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassNonLightPass__ExecutionTimeType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const None;

  /// @brief Field BeforeBlur value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const BeforeBlur;

  /// @brief Field AfterBlur value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const AfterBlur;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassNonLightPass
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(14695))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14696))
// CS Name: ::BloomPrePassNonLightPass*
class CORDL_TYPE BloomPrePassNonLightPass : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ExecutionTimeType = ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType;

  /// @brief Field _executionTimeType, offset 0x18, size 0x4
  __declspec(property(get = __get__executionTimeType, put = __set__executionTimeType))::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType _executionTimeType;

  /// @brief Field _registeredExecutionTimeType, offset 0x1c, size 0x4
  __declspec(property(get = __get__registeredExecutionTimeType, put = __set__registeredExecutionTimeType))::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType _registeredExecutionTimeType;

  /// @brief Field _bloomPrePassAfterBlurList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__bloomPrePassAfterBlurList,
                             put = setStaticF__bloomPrePassAfterBlurList))::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* _bloomPrePassAfterBlurList;

  /// @brief Field _bloomPrePassBeforeBlurList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__bloomPrePassBeforeBlurList,
                             put = setStaticF__bloomPrePassBeforeBlurList))::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* _bloomPrePassBeforeBlurList;

  __declspec(property(get = get_executionTimeType))::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType executionTimeType;

  constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType& __get__executionTimeType();

  constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const& __get__executionTimeType() const;

  constexpr void __set__executionTimeType(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType value);

  constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType& __get__registeredExecutionTimeType();

  constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const& __get__registeredExecutionTimeType() const;

  constexpr void __set__registeredExecutionTimeType(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType value);

  static inline void setStaticF__bloomPrePassAfterBlurList(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* getStaticF__bloomPrePassAfterBlurList();

  static inline void setStaticF__bloomPrePassBeforeBlurList(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* getStaticF__bloomPrePassBeforeBlurList();

  /// @brief Method get_executionTimeType addr 0x1fb1dac size 0x8 virtual false final false
  inline ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType get_executionTimeType();

  /// @brief Method get_bloomPrePassAfterBlurList addr 0x1fb1db4 size 0x58 virtual false final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassAfterBlurList();

  /// @brief Method get_bloomPrePassBeforeBlurList addr 0x1fb1e0c size 0x58 virtual false final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassNonLightPass*>* get_bloomPrePassBeforeBlurList();

  /// @brief Method OnEnable addr 0x1fb08d4 size 0x4 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x1fb1e64 size 0x4 virtual true final false
  inline void OnDisable();

  /// @brief Method Register addr 0x1fb0768 size 0x124 virtual false final false
  inline void Register();

  /// @brief Method Unregister addr 0x1fb06ac size 0xbc virtual false final false
  inline void Unregister();

  /// @brief Method OnValidate addr 0x1fb1210 size 0x2c virtual true final false
  inline void OnValidate();

  /// @brief Method Render addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  static inline ::GlobalNamespace::BloomPrePassNonLightPass* New_ctor();

  /// @brief Method .ctor addr 0x1faf03c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassNonLightPass(BloomPrePassNonLightPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassNonLightPass(BloomPrePassNonLightPass const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassNonLightPass();

public:
  /// @brief Field _executionTimeType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType ____executionTimeType;

  /// @brief Field _registeredExecutionTimeType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType ____registeredExecutionTimeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassNonLightPass, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassNonLightPass, ____executionTimeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassNonLightPass, ____registeredExecutionTimeType) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType, "", "BloomPrePassNonLightPass/ExecutionTimeType");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassNonLightPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassNonLightPass*, "", "BloomPrePassNonLightPass");
