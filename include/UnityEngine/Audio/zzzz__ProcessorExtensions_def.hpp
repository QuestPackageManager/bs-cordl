#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
CORDL_MODULE_EXPORT(ProcessorExtensions)
namespace UnityEngine::Audio {
struct ControlFunction;
}
namespace UnityEngine::Audio {
struct ProcessorFunction;
}
namespace UnityEngine::Audio {
struct ProcessorHeader;
}
// Forward declare root types
namespace UnityEngine::Audio {
class ProcessorExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::ProcessorExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorExtensions*, "UnityEngine.Audio", "ProcessorExtensions");
// Dependencies System.Object, UnityEngine.Audio.ProcessorInstance::IControl`1<TRealtime>, UnityEngine.Audio.ProcessorInstance::IRealtime
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ProcessorExtensions
class CORDL_TYPE ProcessorExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method CAllocChunk, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T* CAllocChunk();

  /// @brief Method DispatchGenericControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl, typename TRealtime>
    requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*> && ::cordl_internals::value_type_constraint<TControl> &&
             ::cordl_internals::default_constructor_constraint<TControl> && ::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::ProcessorInstance_IRealtime*> &&
             ::cordl_internals::value_type_constraint<TRealtime> && ::cordl_internals::default_constructor_constraint<TRealtime>)
  static inline void DispatchGenericControl(::by_ref<TControl> control, ::by_ref<TRealtime> realtime, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorHeader const> header,
                                            void* additionalPtr, ::UnityEngine::Audio::ControlFunction function);

  /// @brief Method DispatchGenericProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Audio::ProcessorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<T> &&
             ::cordl_internals::default_constructor_constraint<T>)
  static inline void DispatchGenericProcessor(::by_ref<T> processor, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorHeader const> header, void* additionalPtr,
                                              ::UnityEngine::Audio::ProcessorFunction function);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessorExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessorExtensions(ProcessorExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessorExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessorExtensions(ProcessorExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ProcessorExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
