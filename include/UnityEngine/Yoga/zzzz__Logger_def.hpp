#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Logger)
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::Yoga {
class YogaConfig;
}
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
struct YogaLogLevel;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::Logger);
// Type: UnityEngine.Yoga::Logger
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15374))
// CS Name: ::UnityEngine.Yoga::Logger*
class CORDL_TYPE Logger : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Yoga::Logger* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ea55a4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2ea56d4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Yoga::YogaConfig* config, ::UnityEngine::Yoga::YogaNode* node, ::UnityEngine::Yoga::YogaLogLevel level, ::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Logger(Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Logger(Logger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Logger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::Logger, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::Logger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Logger*, "UnityEngine.Yoga", "Logger");
