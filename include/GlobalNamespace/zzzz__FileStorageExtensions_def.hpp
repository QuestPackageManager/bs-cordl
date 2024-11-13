#pragma once
// IWYU pragma private; include "GlobalNamespace/FileStorageExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileStorageExtensions)
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
struct StoragePreference;
}
namespace GlobalNamespace {
template <typename T> struct __FileStorageExtensions___LoadFromJSONFileAsync_d__8_1;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass4_0;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FileStorageExtensions;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __FileStorageExtensions____c__DisplayClass4_0;
}
namespace GlobalNamespace {
template <typename T> struct __FileStorageExtensions___LoadFromJSONFileAsync_d__8_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileStorageExtensions);
MARK_REF_PTR_T(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0);
MARK_REF_PTR_T(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0);
MARK_REF_PTR_T(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0);
MARK_GEN_VAL_T(::GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileStorageExtensions::<>c__DisplayClass1_0*
class CORDL_TYPE __FileStorageExtensions____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fileName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName)) ::StringW fileName;

  /// @brief Field fileStorage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fileStorage, put = __cordl_internal_set_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field storageLocation, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_storageLocation, put = __cordl_internal_set_storageLocation)) ::GlobalNamespace::StoragePreference storageLocation;

  /// @brief Field value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  static inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0* New_ctor();

  /// @brief Method <SaveFile>b__0, addr 0x22705d4, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _SaveFile_b__0();

  constexpr ::StringW const& __cordl_internal_get_fileName() const;

  constexpr ::StringW& __cordl_internal_get_fileName();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get_fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get_fileStorage() const;

  constexpr ::GlobalNamespace::StoragePreference const& __cordl_internal_get_storageLocation() const;

  constexpr ::GlobalNamespace::StoragePreference& __cordl_internal_get_storageLocation();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_fileName(::StringW value);

  constexpr void __cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x22700a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileStorageExtensions____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileStorageExtensions____c__DisplayClass1_0(__FileStorageExtensions____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileStorageExtensions____c__DisplayClass1_0(__FileStorageExtensions____c__DisplayClass1_0 const&) = delete;

  /// @brief Field fileStorage, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ___fileStorage;

  /// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___fileName;

  /// @brief Field value, offset: 0x20, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field storageLocation, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::StoragePreference ___storageLocation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18784 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0, ___fileStorage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0, ___fileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0, ___value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0, ___storageLocation) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileStorageExtensions::<>c__DisplayClass2_0*
class CORDL_TYPE __FileStorageExtensions____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fileName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName)) ::StringW fileName;

  /// @brief Field fileStorage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fileStorage, put = __cordl_internal_set_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field storageLocation, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_storageLocation, put = __cordl_internal_set_storageLocation)) ::GlobalNamespace::StoragePreference storageLocation;

  static inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0* New_ctor();

  /// @brief Method <LoadFile>b__0, addr 0x2270690, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* _LoadFile_b__0();

  constexpr ::StringW const& __cordl_internal_get_fileName() const;

  constexpr ::StringW& __cordl_internal_get_fileName();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get_fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get_fileStorage() const;

  constexpr ::GlobalNamespace::StoragePreference const& __cordl_internal_get_storageLocation() const;

  constexpr ::GlobalNamespace::StoragePreference& __cordl_internal_get_storageLocation();

  constexpr void __cordl_internal_set_fileName(::StringW value);

  constexpr void __cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value);

  /// @brief Method .ctor, addr 0x2270180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileStorageExtensions____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileStorageExtensions____c__DisplayClass2_0(__FileStorageExtensions____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileStorageExtensions____c__DisplayClass2_0(__FileStorageExtensions____c__DisplayClass2_0 const&) = delete;

  /// @brief Field fileStorage, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ___fileStorage;

  /// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___fileName;

  /// @brief Field storageLocation, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::StoragePreference ___storageLocation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0, ___fileStorage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0, ___fileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0, ___storageLocation) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileStorageExtensions::<>c__DisplayClass3_0*
class CORDL_TYPE __FileStorageExtensions____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fileName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName)) ::StringW fileName;

  /// @brief Field fileStorage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fileStorage, put = __cordl_internal_set_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field storageLocation, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_storageLocation, put = __cordl_internal_set_storageLocation)) ::GlobalNamespace::StoragePreference storageLocation;

  static inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0* New_ctor();

  /// @brief Method <FileExists>b__0, addr 0x2270744, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* _FileExists_b__0();

  constexpr ::StringW const& __cordl_internal_get_fileName() const;

  constexpr ::StringW& __cordl_internal_get_fileName();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get_fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get_fileStorage() const;

  constexpr ::GlobalNamespace::StoragePreference const& __cordl_internal_get_storageLocation() const;

  constexpr ::GlobalNamespace::StoragePreference& __cordl_internal_get_storageLocation();

  constexpr void __cordl_internal_set_fileName(::StringW value);

  constexpr void __cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value);

  /// @brief Method .ctor, addr 0x227025c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileStorageExtensions____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileStorageExtensions____c__DisplayClass3_0(__FileStorageExtensions____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileStorageExtensions____c__DisplayClass3_0(__FileStorageExtensions____c__DisplayClass3_0 const&) = delete;

  /// @brief Field fileStorage, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ___fileStorage;

  /// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___fileName;

  /// @brief Field storageLocation, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::StoragePreference ___storageLocation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18786 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0, ___fileStorage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0, ___fileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0, ___storageLocation) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileStorageExtensions::<>c__DisplayClass4_0*
class CORDL_TYPE __FileStorageExtensions____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fileName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fileName, put = __cordl_internal_set_fileName)) ::StringW fileName;

  /// @brief Field fileStorage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fileStorage, put = __cordl_internal_set_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field storageLocation, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_storageLocation, put = __cordl_internal_set_storageLocation)) ::GlobalNamespace::StoragePreference storageLocation;

  static inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0* New_ctor();

  /// @brief Method <DeleteFile>b__0, addr 0x22707f8, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _DeleteFile_b__0();

  constexpr ::StringW const& __cordl_internal_get_fileName() const;

  constexpr ::StringW& __cordl_internal_get_fileName();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get_fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get_fileStorage() const;

  constexpr ::GlobalNamespace::StoragePreference const& __cordl_internal_get_storageLocation() const;

  constexpr ::GlobalNamespace::StoragePreference& __cordl_internal_get_storageLocation();

  constexpr void __cordl_internal_set_fileName(::StringW value);

  constexpr void __cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value);

  /// @brief Method .ctor, addr 0x2270324, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileStorageExtensions____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileStorageExtensions____c__DisplayClass4_0(__FileStorageExtensions____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileStorageExtensions____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileStorageExtensions____c__DisplayClass4_0(__FileStorageExtensions____c__DisplayClass4_0 const&) = delete;

  /// @brief Field fileStorage, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ___fileStorage;

  /// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___fileName;

  /// @brief Field storageLocation, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::StoragePreference ___storageLocation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18787 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0, ___fileStorage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0, ___fileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0, ___storageLocation) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadFromJSONFileAsync>d__8`1
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::FileStorageExtensions::<LoadFromJSONFileAsync>d__8`1<T>
struct CORDL_TYPE __FileStorageExtensions___LoadFromJSONFileAsync_d__8_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileStorageExtensions___LoadFromJSONFileAsync_d__8_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "",
  // def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "storageLocation", ty: "::GlobalNamespace::StoragePreference", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __FileStorageExtensions___LoadFromJSONFileAsync_d__8_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                                   ::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field fileStorage, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field fileName, offset: 0x28, size: 0x8, def value: None
  ::StringW fileName;

  /// @brief Field storageLocation, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::StoragePreference storageLocation;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::FileStorageExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileStorageExtensions*
class CORDL_TYPE FileStorageExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using _LoadFromJSONFileAsync_d__8_1 = ::GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>;

  using __c__DisplayClass1_0 = ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0;

  /// @brief Method DeleteFile, addr 0x2270264, size 0xc0, virtual false, abstract: false, final false
  static inline void DeleteFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method FileExists, addr 0x2270188, size 0xd4, virtual false, abstract: false, final false
  static inline bool FileExists(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method LoadFile, addr 0x22700ac, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW LoadFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method LoadFromJSONFile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T LoadFromJSONFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method LoadFromJSONFileAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Threading::Tasks::Task_1<T>* LoadFromJSONFileAsync(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method SaveFile, addr 0x226ffd4, size 0xd0, virtual false, abstract: false, final false
  static inline void SaveFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method SaveToJSONFile, addr 0x227032c, size 0x174, virtual false, abstract: false, final false
  static inline void SaveToJSONFile(::GlobalNamespace::IFileStorage* fileStorage, ::System::Object* obj, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation,
                                    ::Newtonsoft::Json::JsonSerializerSettings* overrideSerializerSettings);

  /// @brief Method SaveToJSONFileAsync, addr 0x22704a0, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* SaveToJSONFileAsync(::GlobalNamespace::IFileStorage* fileStorage, ::System::Object* obj, ::StringW fileName,
                                                                      ::GlobalNamespace::StoragePreference storageLocation, ::Newtonsoft::Json::JsonSerializerSettings* overrideSerializerSettings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStorageExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileStorageExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileStorageExtensions(FileStorageExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileStorageExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileStorageExtensions(FileStorageExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18789 };

  /// @brief Field kSizeInBytesUntilDeserializeWarning offset 0xffffffff size 0x4
  static constexpr int32_t kSizeInBytesUntilDeserializeWarning{ static_cast<int32_t>(0x2710) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileStorageExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileStorageExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileStorageExtensions*, "", "FileStorageExtensions");
NEED_NO_BOX(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0*, "", "FileStorageExtensions/<>c__DisplayClass1_0");
NEED_NO_BOX(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0*, "", "FileStorageExtensions/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0*, "", "FileStorageExtensions/<>c__DisplayClass3_0");
NEED_NO_BOX(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0*, "", "FileStorageExtensions/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1, "", "FileStorageExtensions/<LoadFromJSONFileAsync>d__8`1");
