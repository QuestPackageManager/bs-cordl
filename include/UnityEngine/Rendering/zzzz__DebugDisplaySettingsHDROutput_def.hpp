#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsHDROutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsHDROutput)
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsHDROutput_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsHDROutput___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering {
class DebugUI_Table;
}
namespace UnityEngine {
class HDROutputSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugDisplaySettingsHDROutput;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsHDROutput_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsHDROutput___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput_Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput___c__DisplayClass1_0);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsHDROutput/Strings
class CORDL_TYPE DebugDisplaySettingsHDROutput_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field autoHdrTonemapping, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_autoHdrTonemapping, put = setStaticF_autoHdrTonemapping)) ::StringW autoHdrTonemapping;

  /// @brief Field displayMain, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_displayMain, put = setStaticF_displayMain)) ::StringW displayMain;

  /// @brief Field displayName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_displayName, put = setStaticF_displayName)) ::StringW displayName;

  /// @brief Field format, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_format, put = setStaticF_format)) ::StringW format;

  /// @brief Field gamut, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gamut, put = setStaticF_gamut)) ::StringW gamut;

  /// @brief Field hdrActive, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hdrActive, put = setStaticF_hdrActive)) ::StringW hdrActive;

  /// @brief Field hdrAvailable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hdrAvailable, put = setStaticF_hdrAvailable)) ::StringW hdrAvailable;

  /// @brief Field hdrOutputAPI, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hdrOutputAPI, put = setStaticF_hdrOutputAPI)) ::StringW hdrOutputAPI;

  /// @brief Field maxFullFrameLuminance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_maxFullFrameLuminance, put = setStaticF_maxFullFrameLuminance)) ::StringW maxFullFrameLuminance;

  /// @brief Field maxLuminance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_maxLuminance, put = setStaticF_maxLuminance)) ::StringW maxLuminance;

  /// @brief Field minLuminance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_minLuminance, put = setStaticF_minLuminance)) ::StringW minLuminance;

  /// @brief Field modeChangeRequested, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_modeChangeRequested, put = setStaticF_modeChangeRequested)) ::StringW modeChangeRequested;

  /// @brief Field notAvailable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_notAvailable, put = setStaticF_notAvailable)) ::StringW notAvailable;

  /// @brief Field paperWhite, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_paperWhite, put = setStaticF_paperWhite)) ::StringW paperWhite;

  static inline ::StringW getStaticF_autoHdrTonemapping();

  static inline ::StringW getStaticF_displayMain();

  static inline ::StringW getStaticF_displayName();

  static inline ::StringW getStaticF_format();

  static inline ::StringW getStaticF_gamut();

  static inline ::StringW getStaticF_hdrActive();

  static inline ::StringW getStaticF_hdrAvailable();

  static inline ::StringW getStaticF_hdrOutputAPI();

  static inline ::StringW getStaticF_maxFullFrameLuminance();

  static inline ::StringW getStaticF_maxLuminance();

  static inline ::StringW getStaticF_minLuminance();

  static inline ::StringW getStaticF_modeChangeRequested();

  static inline ::StringW getStaticF_notAvailable();

  static inline ::StringW getStaticF_paperWhite();

  static inline void setStaticF_autoHdrTonemapping(::StringW value);

  static inline void setStaticF_displayMain(::StringW value);

  static inline void setStaticF_displayName(::StringW value);

  static inline void setStaticF_format(::StringW value);

  static inline void setStaticF_gamut(::StringW value);

  static inline void setStaticF_hdrActive(::StringW value);

  static inline void setStaticF_hdrAvailable(::StringW value);

  static inline void setStaticF_hdrOutputAPI(::StringW value);

  static inline void setStaticF_maxFullFrameLuminance(::StringW value);

  static inline void setStaticF_maxLuminance(::StringW value);

  static inline void setStaticF_minLuminance(::StringW value);

  static inline void setStaticF_modeChangeRequested(::StringW value);

  static inline void setStaticF_notAvailable(::StringW value);

  static inline void setStaticF_paperWhite(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsHDROutput_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsHDROutput_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsHDROutput_Strings(DebugDisplaySettingsHDROutput_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsHDROutput_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsHDROutput_Strings(DebugDisplaySettingsHDROutput_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11923 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsHDROutput_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsHDROutput/<>c__DisplayClass1_0
class CORDL_TYPE DebugDisplaySettingsHDROutput___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::UnityEngine::HDROutputSettings* d;

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsHDROutput___c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateHDROuputDisplayTable>b__0, addr 0x65a3da8, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__0();

  /// @brief Method <CreateHDROuputDisplayTable>b__1, addr 0x65a3de0, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__1();

  /// @brief Method <CreateHDROuputDisplayTable>b__2, addr 0x65a3e18, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__2();

  /// @brief Method <CreateHDROuputDisplayTable>b__3, addr 0x65a3ed8, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__3();

  /// @brief Method <CreateHDROuputDisplayTable>b__4, addr 0x65a3f98, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__4();

  /// @brief Method <CreateHDROuputDisplayTable>b__5, addr 0x65a4044, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__5();

  /// @brief Method <CreateHDROuputDisplayTable>b__6, addr 0x65a40ec, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__6();

  /// @brief Method <CreateHDROuputDisplayTable>b__7, addr 0x65a4198, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__7();

  /// @brief Method <CreateHDROuputDisplayTable>b__8, addr 0x65a4244, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__8();

  /// @brief Method <CreateHDROuputDisplayTable>b__9, addr 0x65a42f0, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* _CreateHDROuputDisplayTable_b__9();

  constexpr ::UnityEngine::HDROutputSettings* const& __cordl_internal_get_d() const;

  constexpr ::UnityEngine::HDROutputSettings*& __cordl_internal_get_d();

  constexpr void __cordl_internal_set_d(::UnityEngine::HDROutputSettings* value);

  /// @brief Method .ctor, addr 0x65a3da4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsHDROutput___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsHDROutput___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsHDROutput___c__DisplayClass1_0(DebugDisplaySettingsHDROutput___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsHDROutput___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsHDROutput___c__DisplayClass1_0(DebugDisplaySettingsHDROutput___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11924 };

  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::HDROutputSettings* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput___c__DisplayClass1_0, ___d) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsHDROutput___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsHDROutput
class CORDL_TYPE DebugDisplaySettingsHDROutput : public ::System::Object {
public:
  // Declarations
  using Strings = ::UnityEngine::Rendering::DebugDisplaySettingsHDROutput_Strings;

  using __c__DisplayClass1_0 = ::UnityEngine::Rendering::DebugDisplaySettingsHDROutput___c__DisplayClass1_0;

  /// @brief Method CreateHDROuputDisplayTable, addr 0x65a2364, size 0xca0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Table* CreateHDROuputDisplayTable();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsHDROutput* New_ctor();

  /// @brief Method .ctor, addr 0x65a3004, size 0xa8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsHDROutput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsHDROutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsHDROutput(DebugDisplaySettingsHDROutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsHDROutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsHDROutput(DebugDisplaySettingsHDROutput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11925 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsHDROutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput*, "UnityEngine.Rendering", "DebugDisplaySettingsHDROutput");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput_Strings*, "UnityEngine.Rendering", "DebugDisplaySettingsHDROutput/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsHDROutput___c__DisplayClass1_0*, "UnityEngine.Rendering", "DebugDisplaySettingsHDROutput/<>c__DisplayClass1_0");
