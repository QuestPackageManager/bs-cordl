#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeMsFunction)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TimeMsFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TimeMsFunction);
// Type: UnityEngine.UIElements::TimeMsFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TimeMsFunction*
class CORDL_TYPE TimeMsFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2f30d38, size 0x14, virtual true, abstract: false, final false
  inline int64_t Invoke();

  static inline ::UnityEngine::UIElements::TimeMsFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2f30c7c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeMsFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeMsFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeMsFunction(TimeMsFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeMsFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeMsFunction(TimeMsFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimeMsFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TimeMsFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeMsFunction*, "UnityEngine.UIElements", "TimeMsFunction");
