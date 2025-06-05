#pragma once
// IWYU pragma private; include "System/Gen2GcCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
CORDL_MODULE_EXPORT(Gen2GcCallback)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class Gen2GcCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Gen2GcCallback);
// Dependencies System.Runtime.ConstrainedExecution.CriticalFinalizerObject, System.Runtime.InteropServices.GCHandle
namespace System {
// Is value type: false
// CS Name: System.Gen2GcCallback
class CORDL_TYPE Gen2GcCallback : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  /// @brief Field _callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__callback, put = __cordl_internal_set__callback)) ::System::Func_2<::System::Object*, bool>* _callback;

  /// @brief Field _weakTargetObj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__weakTargetObj, put = __cordl_internal_set__weakTargetObj)) ::System::Runtime::InteropServices::GCHandle _weakTargetObj;

  /// @brief Method Finalize, addr 0x3dd5318, size 0x1ac, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Gen2GcCallback* New_ctor();

  /// @brief Method Register, addr 0x3dd5270, size 0x80, virtual false, abstract: false, final false
  static inline void Register(::System::Func_2<::System::Object*, bool>* callback, ::System::Object* targetObj);

  /// @brief Method Setup, addr 0x3dd52f0, size 0x28, virtual false, abstract: false, final false
  inline void Setup(::System::Func_2<::System::Object*, bool>* callback, ::System::Object* targetObj);

  constexpr ::System::Func_2<::System::Object*, bool>* const& __cordl_internal_get__callback() const;

  constexpr ::System::Func_2<::System::Object*, bool>*& __cordl_internal_get__callback();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__weakTargetObj() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__weakTargetObj();

  constexpr void __cordl_internal_set__callback(::System::Func_2<::System::Object*, bool>* value);

  constexpr void __cordl_internal_set__weakTargetObj(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x3dd5268, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gen2GcCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gen2GcCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gen2GcCallback(Gen2GcCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gen2GcCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gen2GcCallback(Gen2GcCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2386 };

  /// @brief Field _callback, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, bool>* ____callback;

  /// @brief Field _weakTargetObj, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____weakTargetObj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Gen2GcCallback, ____callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Gen2GcCallback, ____weakTargetObj) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Gen2GcCallback, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Gen2GcCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Gen2GcCallback*, "System", "Gen2GcCallback");
