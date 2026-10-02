#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IRootOutputControlExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "UnityEngine/Audio/zzzz__IRootOutputProcessorExtensions_def.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IRootOutputControlExtensions)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> struct IRootOutputControlExtensions_JobStruct_2;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> struct JobStruct_2_IRootOutputControlExtensions_ControlStorage;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> class JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction;
}
// Forward declare root types
namespace UnityEngine::Audio {
class IRootOutputControlExtensions;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> class JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> struct IRootOutputControlExtensions_JobStruct_2;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> struct JobStruct_2_IRootOutputControlExtensions_ControlStorage;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IRootOutputControlExtensions*);
MARK_GEN_REF_T_PTR(::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2);
MARK_GEN_VAL_T(::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IRootOutputControlExtensions*, "UnityEngine.Audio", "IRootOutputControlExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction, "UnityEngine.Audio", "IRootOutputControlExtensions/JobStruct`2/ExecuteJobFunction");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2, "UnityEngine.Audio", "IRootOutputControlExtensions/JobStruct`2");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage, "UnityEngine.Audio", "IRootOutputControlExtensions/JobStruct`2/ControlStorage");
// Dependencies UnityEngine.Audio.IRootOutputProcessorExtensions::JobStruct`1::Storage<TUserProcessor>
namespace UnityEngine::Audio {
// cpp template
template <typename TUserControl, typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IRootOutputControlExtensions/JobStruct`2/ControlStorage<TUserControl,TUserProcessor>
struct CORDL_TYPE JobStruct_2_IRootOutputControlExtensions_ControlStorage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_2_IRootOutputControlExtensions_ControlStorage();

  // Ctor Parameters [CppParam { name: "HeaderAndProcessor", ty: "::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor>", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "UserControl", ty: "TUserControl", modifiers: "", def_value: None, comment: None }]
  constexpr JobStruct_2_IRootOutputControlExtensions_ControlStorage(::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor> HeaderAndProcessor,
                                                                    TUserControl UserControl) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20402 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field HeaderAndProcessor, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Audio::JobStruct_1_IRootOutputProcessorExtensions_Storage<TUserProcessor> HeaderAndProcessor;

  /// @brief Field UserControl, offset: 0x40, size: 0x8, def value: None
  TUserControl UserControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies System.MulticastDelegate
namespace UnityEngine::Audio {
// cpp template
template <typename TUserControl, typename TUserProcessor>
// Is value type: false
// CS Name: UnityEngine.Audio.IRootOutputControlExtensions/JobStruct`2/ExecuteJobFunction<TUserControl,TUserProcessor>
class CORDL_TYPE JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage,
                                             ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage,
                        ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::System::IntPtr additionalPtr,
                     ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction(JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction(JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20403 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies System.IntPtr, Unity.Collections.LowLevel.Unsafe.BurstLike::SharedStatic`1<T>
namespace UnityEngine::Audio {
// cpp template
template <typename TUserControl, typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IRootOutputControlExtensions/JobStruct`2<TUserControl,TUserProcessor>
#pragma pack(push, 0)
struct CORDL_TYPE IRootOutputControlExtensions_JobStruct_2 {
public:
  // Declarations
  using ControlStorage = ::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>;

  using ExecuteJobFunction = ::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::by_ref<::UnityEngine::Audio::JobStruct_2_IRootOutputControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::System::IntPtr additionalPtr,
                             ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// [BurstDiscard]
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IRootOutputControlExtensions_JobStruct_2();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20404 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Audio
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.Object, UnityEngine.Audio.RootOutputInstance::IControl`1<TRealtime>, UnityEngine.Audio.RootOutputInstance::IRealtime
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IRootOutputControlExtensions
class CORDL_TYPE IRootOutputControlExtensions : public ::System::Object {
public:
  // Declarations
  template <typename TUserControl, typename TUserProcessor> using JobStruct_2 = ::UnityEngine::Audio::IRootOutputControlExtensions_JobStruct_2<TUserControl, TUserProcessor>;

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TUserControl, typename TUserProcessor>
    requires(::cordl_internals::type_constraint<TUserControl, ::UnityEngine::Audio::RootOutputInstance_IControl_1<TUserProcessor>*> && ::cordl_internals::value_type_constraint<TUserControl> &&
             ::cordl_internals::default_constructor_constraint<TUserControl> && ::cordl_internals::type_constraint<TUserProcessor, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> &&
             ::cordl_internals::value_type_constraint<TUserProcessor> && ::cordl_internals::default_constructor_constraint<TUserProcessor>)
  static inline ::System::IntPtr GetReflectionData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRootOutputControlExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IRootOutputControlExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRootOutputControlExtensions(IRootOutputControlExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRootOutputControlExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRootOutputControlExtensions(IRootOutputControlExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::IRootOutputControlExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
