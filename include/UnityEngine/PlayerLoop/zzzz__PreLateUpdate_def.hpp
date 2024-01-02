#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PreLateUpdate)
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ScriptRunBehaviourLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ConstraintManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UIElementsUpdatePanels;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateMasterServerInterface;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UNetUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ParticleSystemBeginUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__Physics2DLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorDeferredEvaluate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__AIUpdatePostScript;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationBegin;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__LegacyAnimationUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationEnd;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateNetworkManager;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__AIUpdatePostScript;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ConstraintManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorDeferredEvaluate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationBegin;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationEnd;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__LegacyAnimationUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ParticleSystemBeginUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__Physics2DLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ScriptRunBehaviourLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UIElementsUpdatePanels;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UNetUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateMasterServerInterface;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateNetworkManager;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PreLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager);
// Type: ::Physics2DLateUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10546))
// CS Name: ::PreLateUpdate::Physics2DLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__Physics2DLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__Physics2DLateUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::AIUpdatePostScript
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10547))
// CS Name: ::PreLateUpdate::AIUpdatePostScript
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__AIUpdatePostScript {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__AIUpdatePostScript();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::DirectorUpdateAnimationBegin
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10548))
// CS Name: ::PreLateUpdate::DirectorUpdateAnimationBegin
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__DirectorUpdateAnimationBegin {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__DirectorUpdateAnimationBegin();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::LegacyAnimationUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10549))
// CS Name: ::PreLateUpdate::LegacyAnimationUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__LegacyAnimationUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__LegacyAnimationUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::DirectorUpdateAnimationEnd
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10550))
// CS Name: ::PreLateUpdate::DirectorUpdateAnimationEnd
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__DirectorUpdateAnimationEnd {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__DirectorUpdateAnimationEnd();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::DirectorDeferredEvaluate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10551))
// CS Name: ::PreLateUpdate::DirectorDeferredEvaluate
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__DirectorDeferredEvaluate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__DirectorDeferredEvaluate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UIElementsUpdatePanels
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10552))
// CS Name: ::PreLateUpdate::UIElementsUpdatePanels
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__UIElementsUpdatePanels {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__UIElementsUpdatePanels();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateNetworkManager
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10553))
// CS Name: ::PreLateUpdate::UpdateNetworkManager
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__UpdateNetworkManager {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__UpdateNetworkManager();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateMasterServerInterface
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10554))
// CS Name: ::PreLateUpdate::UpdateMasterServerInterface
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__UpdateMasterServerInterface {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__UpdateMasterServerInterface();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UNetUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10555))
// CS Name: ::PreLateUpdate::UNetUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__UNetUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__UNetUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::EndGraphicsJobsAfterScriptUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10556))
// CS Name: ::PreLateUpdate::EndGraphicsJobsAfterScriptUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ParticleSystemBeginUpdateAll
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10557))
// CS Name: ::PreLateUpdate::ParticleSystemBeginUpdateAll
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__ParticleSystemBeginUpdateAll {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__ParticleSystemBeginUpdateAll();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ScriptRunBehaviourLateUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10558))
// CS Name: ::PreLateUpdate::ScriptRunBehaviourLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__ScriptRunBehaviourLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__ScriptRunBehaviourLateUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ConstraintManagerUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10559))
// CS Name: ::PreLateUpdate::ConstraintManagerUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreLateUpdate__ConstraintManagerUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreLateUpdate__ConstraintManagerUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PreLateUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10560))
// CS Name: ::UnityEngine.PlayerLoop::PreLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PreLateUpdate {
public:
  // Declarations
  using ConstraintManagerUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate;

  using ScriptRunBehaviourLateUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate;

  using ParticleSystemBeginUpdateAll = ::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll;

  using EndGraphicsJobsAfterScriptUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;

  using UNetUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate;

  using UpdateMasterServerInterface = ::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface;

  using UpdateNetworkManager = ::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager;

  using UIElementsUpdatePanels = ::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels;

  using DirectorDeferredEvaluate = ::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate;

  using DirectorUpdateAnimationEnd = ::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd;

  using LegacyAnimationUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate;

  using DirectorUpdateAnimationBegin = ::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin;

  using AIUpdatePostScript = ::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript;

  using Physics2DLateUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PreLateUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PreLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PreLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript, "UnityEngine.PlayerLoop", "PreLateUpdate/AIUpdatePostScript");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/ConstraintManagerUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorDeferredEvaluate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorUpdateAnimationBegin");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorUpdateAnimationEnd");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/EndGraphicsJobsAfterScriptUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/LegacyAnimationUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll, "UnityEngine.PlayerLoop", "PreLateUpdate/ParticleSystemBeginUpdateAll");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/Physics2DLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/ScriptRunBehaviourLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels, "UnityEngine.PlayerLoop", "PreLateUpdate/UIElementsUpdatePanels");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/UNetUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface, "UnityEngine.PlayerLoop", "PreLateUpdate/UpdateMasterServerInterface");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager, "UnityEngine.PlayerLoop", "PreLateUpdate/UpdateNetworkManager");
