#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeDebugColorPreferences.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ProbeVolumeDebugColorPreferences)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeDebugColorPreferences;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences);
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeDebugColorPreferences
class CORDL_TYPE ProbeVolumeDebugColorPreferences : public ::System::Object {
public:
  // Declarations
  /// @brief Field GetDetailSubdivisionColor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GetDetailSubdivisionColor, put = setStaticF_GetDetailSubdivisionColor)) ::System::Func_1<::UnityEngine::Color>* GetDetailSubdivisionColor;

  /// @brief Field GetLowSubdivisionColor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GetLowSubdivisionColor, put = setStaticF_GetLowSubdivisionColor)) ::System::Func_1<::UnityEngine::Color>* GetLowSubdivisionColor;

  /// @brief Field GetMediumSubdivisionColor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GetMediumSubdivisionColor, put = setStaticF_GetMediumSubdivisionColor)) ::System::Func_1<::UnityEngine::Color>* GetMediumSubdivisionColor;

  /// @brief Field GetSparseSubdivisionColor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GetSparseSubdivisionColor, put = setStaticF_GetSparseSubdivisionColor)) ::System::Func_1<::UnityEngine::Color>* GetSparseSubdivisionColor;

  /// @brief Field GetSparsestSubdivisionColor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GetSparsestSubdivisionColor, put = setStaticF_GetSparsestSubdivisionColor)) ::System::Func_1<::UnityEngine::Color>* GetSparsestSubdivisionColor;

  /// @brief Field GetVeryLowSubdivisionColor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GetVeryLowSubdivisionColor, put = setStaticF_GetVeryLowSubdivisionColor)) ::System::Func_1<::UnityEngine::Color>* GetVeryLowSubdivisionColor;

  /// @brief Field s_DetailSubdivision, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_DetailSubdivision, put = setStaticF_s_DetailSubdivision)) ::UnityEngine::Color s_DetailSubdivision;

  /// @brief Field s_LowSubdivision, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_LowSubdivision, put = setStaticF_s_LowSubdivision)) ::UnityEngine::Color s_LowSubdivision;

  /// @brief Field s_MediumSubdivision, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_MediumSubdivision, put = setStaticF_s_MediumSubdivision)) ::UnityEngine::Color s_MediumSubdivision;

  /// @brief Field s_SparseSubdivision, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_SparseSubdivision, put = setStaticF_s_SparseSubdivision)) ::UnityEngine::Color s_SparseSubdivision;

  /// @brief Field s_SparsestSubdivision, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_SparsestSubdivision, put = setStaticF_s_SparsestSubdivision)) ::UnityEngine::Color s_SparsestSubdivision;

  /// @brief Field s_VeryLowSubdivision, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_VeryLowSubdivision, put = setStaticF_s_VeryLowSubdivision)) ::UnityEngine::Color s_VeryLowSubdivision;

  static inline ::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences* New_ctor();

  /// @brief Method .ctor, addr 0x6572f74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_1<::UnityEngine::Color>* getStaticF_GetDetailSubdivisionColor();

  static inline ::System::Func_1<::UnityEngine::Color>* getStaticF_GetLowSubdivisionColor();

  static inline ::System::Func_1<::UnityEngine::Color>* getStaticF_GetMediumSubdivisionColor();

  static inline ::System::Func_1<::UnityEngine::Color>* getStaticF_GetSparseSubdivisionColor();

  static inline ::System::Func_1<::UnityEngine::Color>* getStaticF_GetSparsestSubdivisionColor();

  static inline ::System::Func_1<::UnityEngine::Color>* getStaticF_GetVeryLowSubdivisionColor();

  static inline ::UnityEngine::Color getStaticF_s_DetailSubdivision();

  static inline ::UnityEngine::Color getStaticF_s_LowSubdivision();

  static inline ::UnityEngine::Color getStaticF_s_MediumSubdivision();

  static inline ::UnityEngine::Color getStaticF_s_SparseSubdivision();

  static inline ::UnityEngine::Color getStaticF_s_SparsestSubdivision();

  static inline ::UnityEngine::Color getStaticF_s_VeryLowSubdivision();

  static inline void setStaticF_GetDetailSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value);

  static inline void setStaticF_GetLowSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value);

  static inline void setStaticF_GetMediumSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value);

  static inline void setStaticF_GetSparseSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value);

  static inline void setStaticF_GetSparsestSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value);

  static inline void setStaticF_GetVeryLowSubdivisionColor(::System::Func_1<::UnityEngine::Color>* value);

  static inline void setStaticF_s_DetailSubdivision(::UnityEngine::Color value);

  static inline void setStaticF_s_LowSubdivision(::UnityEngine::Color value);

  static inline void setStaticF_s_MediumSubdivision(::UnityEngine::Color value);

  static inline void setStaticF_s_SparseSubdivision(::UnityEngine::Color value);

  static inline void setStaticF_s_SparsestSubdivision(::UnityEngine::Color value);

  static inline void setStaticF_s_VeryLowSubdivision(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeDebugColorPreferences();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugColorPreferences", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeDebugColorPreferences(ProbeVolumeDebugColorPreferences&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugColorPreferences", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeDebugColorPreferences(ProbeVolumeDebugColorPreferences const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeDebugColorPreferences*, "UnityEngine.Rendering", "ProbeVolumeDebugColorPreferences");
