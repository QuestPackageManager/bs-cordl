#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IGeneratorControlExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__IGeneratorProcessorExtensions_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IGeneratorControlExtensions)
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
template <typename TUserControl, typename TUserProcessor> struct IGeneratorControlExtensions_JobStruct_2;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> struct JobStruct_2_IGeneratorControlExtensions_ControlStorage;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> class JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction;
}
// Forward declare root types
namespace UnityEngine::Audio {
class IGeneratorControlExtensions;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> class JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> struct IGeneratorControlExtensions_JobStruct_2;
}
namespace UnityEngine::Audio {
template <typename TUserControl, typename TUserProcessor> struct JobStruct_2_IGeneratorControlExtensions_ControlStorage;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IGeneratorControlExtensions*);
MARK_GEN_REF_T_PTR(::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction);
MARK_GEN_VAL_T(::UnityEngine::Audio::IGeneratorControlExtensions_JobStruct_2);
MARK_GEN_VAL_T(::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ControlStorage);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IGeneratorControlExtensions*, "UnityEngine.Audio", "IGeneratorControlExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction, "UnityEngine.Audio", "IGeneratorControlExtensions/JobStruct`2/ExecuteJobFunction");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::IGeneratorControlExtensions_JobStruct_2, "UnityEngine.Audio", "IGeneratorControlExtensions/JobStruct`2");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ControlStorage, "UnityEngine.Audio", "IGeneratorControlExtensions/JobStruct`2/ControlStorage");
// Dependencies UnityEngine.Audio.IGeneratorProcessorExtensions::JobStruct`1::Storage<TUserProcessor>
namespace UnityEngine::Audio {
// cpp template
template <typename TUserControl, typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IGeneratorControlExtensions/JobStruct`2/ControlStorage<TUserControl,TUserProcessor>
struct CORDL_TYPE JobStruct_2_IGeneratorControlExtensions_ControlStorage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_2_IGeneratorControlExtensions_ControlStorage();

  // Ctor Parameters [CppParam { name: "HeaderAndProcessor", ty: "::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor>", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "UserControl", ty: "TUserControl", modifiers: "", def_value: None, comment: None }]
  constexpr JobStruct_2_IGeneratorControlExtensions_ControlStorage(::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor> HeaderAndProcessor,
                                                                   TUserControl UserControl) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20381 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field HeaderAndProcessor, offset: 0x0, size: 0x60, def value: None
  ::UnityEngine::Audio::JobStruct_1_IGeneratorProcessorExtensions_Storage<TUserProcessor> HeaderAndProcessor;

  /// @brief Field UserControl, offset: 0x60, size: 0x8, def value: None
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
// CS Name: UnityEngine.Audio.IGeneratorControlExtensions/JobStruct`2/ExecuteJobFunction<TUserControl,TUserProcessor>
class CORDL_TYPE JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage,
                                             ::System::IntPtr additionalPtr, ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage,
                        ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::System::IntPtr additionalPtr,
                     ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  static inline ::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction(JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction(JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies System.IntPtr, Unity.Collections.LowLevel.Unsafe.BurstLike::SharedStatic`1<T>
namespace UnityEngine::Audio {
// cpp template
template <typename TUserControl, typename TUserProcessor>
// Is value type: true
// CS Name: UnityEngine.Audio.IGeneratorControlExtensions/JobStruct`2<TUserControl,TUserProcessor>
#pragma pack(push, 0)
struct CORDL_TYPE IGeneratorControlExtensions_JobStruct_2 {
public:
  // Declarations
  using ControlStorage = ::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ControlStorage<TUserControl, TUserProcessor>;

  using ExecuteJobFunction = ::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ExecuteJobFunction<TUserControl, TUserProcessor>;

  /// @brief Field jobReflectionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jobReflectionData, put = setStaticF_jobReflectionData)) ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> jobReflectionData;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Execute(::by_ref<::UnityEngine::Audio::JobStruct_2_IGeneratorControlExtensions_ControlStorage<TUserControl, TUserProcessor>> storage, ::System::IntPtr additionalPtr,
                             ::System::IntPtr additionalPtr2, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex);

  /// [BurstDiscard]
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> getStaticF_jobReflectionData();

  static inline void setStaticF_jobReflectionData(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<::System::IntPtr> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IGeneratorControlExtensions_JobStruct_2();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Audio
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.Object, UnityEngine.Audio.GeneratorInstance::IControl`1<TRealtime>, UnityEngine.Audio.GeneratorInstance::IRealtime
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IGeneratorControlExtensions
class CORDL_TYPE IGeneratorControlExtensions : public ::System::Object {
public:
  // Declarations
  template <typename TUserControl, typename TUserProcessor> using JobStruct_2 = ::UnityEngine::Audio::IGeneratorControlExtensions_JobStruct_2<TUserControl, TUserProcessor>;

  /// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TUserControl, typename TUserGenerator>
    requires(::cordl_internals::type_constraint<TUserControl, ::UnityEngine::Audio::GeneratorInstance_IControl_1<TUserGenerator>*> && ::cordl_internals::value_type_constraint<TUserControl> &&
             ::cordl_internals::default_constructor_constraint<TUserControl> && ::cordl_internals::type_constraint<TUserGenerator, ::UnityEngine::Audio::GeneratorInstance_IRealtime*> &&
             ::cordl_internals::value_type_constraint<TUserGenerator> && ::cordl_internals::default_constructor_constraint<TUserGenerator>)
  static inline ::System::IntPtr GetReflectionData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IGeneratorControlExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IGeneratorControlExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGeneratorControlExtensions(IGeneratorControlExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGeneratorControlExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGeneratorControlExtensions(IGeneratorControlExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::IGeneratorControlExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
