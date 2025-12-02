#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VolumeParameter)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeParameter);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeParameter
class CORDL_TYPE VolumeParameter : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_OverrideState, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverrideState, put = __cordl_internal_set_m_OverrideState)) bool m_OverrideState;

  __declspec(property(get = get_overrideState, put = set_overrideState)) bool overrideState;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetValue();

  /// @brief Method Interp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Interp(::UnityEngine::Rendering::VolumeParameter* from, ::UnityEngine::Rendering::VolumeParameter* to, float_t t);

  /// @brief Method IsObjectParameter, addr 0x65ad53c, size 0x120, virtual false, abstract: false, final false
  static inline bool IsObjectParameter(::System::Type* type);

  static inline ::UnityEngine::Rendering::VolumeParameter* New_ctor();

  /// @brief Method OnDisable, addr 0x65ad9c0, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x65ad9bc, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Release, addr 0x65ad9c4, size 0x4, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method SetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::UnityEngine::Rendering::VolumeParameter* parameter);

  constexpr bool const& __cordl_internal_get_m_OverrideState() const;

  constexpr bool& __cordl_internal_get_m_OverrideState();

  constexpr void __cordl_internal_set_m_OverrideState(bool value);

  /// @brief Method .ctor, addr 0x65ad9c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_overrideState, addr 0x65ad9ac, size 0x8, virtual true, abstract: false, final false
  inline bool get_overrideState();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_overrideState, addr 0x65ad9b4, size 0x8, virtual true, abstract: false, final false
  inline void set_overrideState(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeParameter(VolumeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeParameter(VolumeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12301 };

  /// @brief Field k_DebuggerDisplay offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DebuggerDisplay{ u"{m_Value} ({m_OverrideState})" };

  /// @brief Field m_OverrideState, offset: 0x10, size: 0x1, def value: None
  bool ___m_OverrideState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeParameter, ___m_OverrideState) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeParameter*, "UnityEngine.Rendering", "VolumeParameter");
