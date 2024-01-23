#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobsUtility)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct ScheduleMode;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct __JobsUtility__JobScheduleParameters;
}
namespace Unity::Jobs::LowLevel::Unsafe {
class __JobsUtility__PanicFunction_;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility;
}
namespace Unity::Jobs::LowLevel::Unsafe {
class __JobsUtility__PanicFunction_;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct __JobsUtility__JobScheduleParameters;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::LowLevel::Unsafe::JobsUtility);
MARK_REF_PTR_T(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_);
MARK_VAL_T(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters);
// Type: ::JobScheduleParameters
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(9977))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9981))
// CS Name: ::JobsUtility::JobScheduleParameters
struct CORDL_TYPE __JobsUtility__JobScheduleParameters {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2c9de84, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> i_jobData, void* i_reflectionData, ::Unity::Jobs::JobHandle i_dependency, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode);

  // Ctor Parameters [CppParam { name: "Dependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "ReflectionData", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "JobDataPtr", ty: "void*", modifiers: "", def_value: None }]
  constexpr __JobsUtility__JobScheduleParameters(::Unity::Jobs::JobHandle Dependency, int32_t ScheduleMode, void* ReflectionData, void* JobDataPtr) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JobsUtility__JobScheduleParameters();

  /// @brief Field Dependency, offset: 0x0, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle Dependency;

  /// @brief Field ScheduleMode, offset: 0x10, size: 0x4, def value: None
  int32_t ScheduleMode;

  /// @brief Field ReflectionData, offset: 0x18, size: 0x8, def value: None
  void* ReflectionData;

  /// @brief Field JobDataPtr, offset: 0x20, size: 0x8, def value: None
  void* JobDataPtr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters, Dependency) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters, ScheduleMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters, ReflectionData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters, JobDataPtr) == 0x20, "Offset mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
// Type: ::PanicFunction_
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9982))
// CS Name: ::JobsUtility::PanicFunction_*
class CORDL_TYPE __JobsUtility__PanicFunction_ : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c9debc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2c9df78, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "__JobsUtility__PanicFunction_", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JobsUtility__PanicFunction_(__JobsUtility__PanicFunction_&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JobsUtility__PanicFunction_", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JobsUtility__PanicFunction_(__JobsUtility__PanicFunction_ const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JobsUtility__PanicFunction_();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_, 0x80>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
// Type: Unity.Jobs.LowLevel.Unsafe::JobsUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9983))
// CS Name: ::Unity.Jobs.LowLevel.Unsafe::JobsUtility*
class CORDL_TYPE JobsUtility : public ::System::Object {
public:
  // Declarations
  using PanicFunction_ = ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_;

  using JobScheduleParameters = ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters;

  /// @brief Field PanicFunction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PanicFunction, put = setStaticF_PanicFunction))::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_* PanicFunction;

  static inline void setStaticF_PanicFunction(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_* value);

  static inline ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_* getStaticF_PanicFunction();

  /// @brief Method GetWorkStealingRange, addr 0x2c9db98, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetWorkStealingRange(ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ByRef<int32_t> beginIndex, ByRef<int32_t> endIndex);

  /// @brief Method Schedule, addr 0x2c9dbf4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle Schedule(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters);

  /// @brief Method ScheduleParallelFor, addr 0x2c9dc8c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleParallelFor(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount);

  /// @brief Method CreateJobReflectionData, addr 0x2c9dd54, size 0x6c, virtual false, abstract: false, final false
  static inline void* CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1,
                                              ::System::Object* managedJobFunction2);

  /// @brief Method CreateJobReflectionData, addr 0x2c9ddc0, size 0x60, virtual false, abstract: false, final false
  static inline void* CreateJobReflectionData(::System::Type* type, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2);

  /// @brief Method InvokePanicFunction, addr 0x2c9de20, size 0x64, virtual false, abstract: false, final false
  static inline void InvokePanicFunction();

  /// @brief Method Schedule_Injected, addr 0x2c9dc48, size 0x44, virtual false, abstract: false, final false
  static inline void Schedule_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method ScheduleParallelFor_Injected, addr 0x2c9dcf8, size 0x5c, virtual false, abstract: false, final false
  static inline void ScheduleParallelFor_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount,
                                                  ByRef<::Unity::Jobs::JobHandle> ret);

  // Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobsUtility(JobsUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobsUtility(JobsUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobsUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobsUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::JobsUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobsUtility*, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility");
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/PanicFunction_");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/JobScheduleParameters");
