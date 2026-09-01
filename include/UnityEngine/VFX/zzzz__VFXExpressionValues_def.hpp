#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXExpressionValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXExpressionValues)
namespace System {
struct IntPtr;
}
namespace UnityEngine::VFX {
class VFXExpressionValues_BindingsMarshaller;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXExpressionValues;
}
namespace UnityEngine::VFX {
class VFXExpressionValues_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXExpressionValues*);
MARK_REF_T(::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXExpressionValues*, "UnityEngine.VFX", "VFXExpressionValues");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller*, "UnityEngine.VFX", "VFXExpressionValues/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXExpressionValues/BindingsMarshaller
class CORDL_TYPE VFXExpressionValues_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6e2cb24, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::VFX::VFXExpressionValues* vFXExpressionValues);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXExpressionValues_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXExpressionValues_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXExpressionValues_BindingsMarshaller(VFXExpressionValues_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXExpressionValues_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXExpressionValues_BindingsMarshaller(VFXExpressionValues_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22398 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXExpressionValues
class CORDL_TYPE VFXExpressionValues : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Method CreateExpressionValuesWrapper, addr 0x6e2c790, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXExpressionValues* CreateExpressionValuesWrapper(::System::IntPtr ptr);

  /// @brief Method GetBool, addr 0x6e2c7e8, size 0x58, virtual false, abstract: false, final false
  inline bool GetBool(int32_t nameID);

  /// @brief Method GetBool_Injected, addr 0x6e2c840, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBool_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method GetFloat, addr 0x6e2c9bc, size 0x58, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloat_Injected, addr 0x6e2ca14, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method GetInt, addr 0x6e2c884, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetInt(int32_t nameID);

  /// @brief Method GetInt_Injected, addr 0x6e2c8dc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetInt_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method GetUInt, addr 0x6e2c920, size 0x58, virtual false, abstract: false, final false
  inline uint32_t GetUInt(int32_t nameID);

  /// @brief Method GetUInt_Injected, addr 0x6e2c978, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetUInt_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method GetVector3, addr 0x6e2ca58, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector3(int32_t nameID);

  /// @brief Method GetVector3_Injected, addr 0x6e2cad0, size 0x54, virtual false, abstract: false, final false
  static inline void GetVector3_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector3> ret);

  static inline ::UnityEngine::VFX::VFXExpressionValues* New_ctor();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6e2c78c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXExpressionValues();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXExpressionValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXExpressionValues(VFXExpressionValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXExpressionValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXExpressionValues(VFXExpressionValues const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22399 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXExpressionValues, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXExpressionValues) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
