#pragma once
// IWYU pragma private; include "GlobalNamespace/BinaryReadWriteExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BinaryReadWriteExtensions)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BinaryReadWriteExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BinaryReadWriteExtensions);
// Type: ::BinaryReadWriteExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BinaryReadWriteExtensions*
class CORDL_TYPE BinaryReadWriteExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadColor, addr 0x227df48, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ReadColor(::System::IO::BinaryReader* binaryReader);

  /// @brief Method ReadListOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* ReadListOf(::System::IO::BinaryReader* binaryReader, ::System::Func_2<::System::IO::BinaryReader*, T>* elementReader);

  /// @brief Method ReadPose, addr 0x227e1f4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose ReadPose(::System::IO::BinaryReader* binaryReader);

  /// @brief Method ReadQuaternion, addr 0x227e130, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion ReadQuaternion(::System::IO::BinaryReader* binaryReader);

  /// @brief Method ReadVector3, addr 0x227e03c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ReadVector3(::System::IO::BinaryReader* binaryReader);

  /// @brief Method Write, addr 0x227dec0, size 0x88, virtual false, abstract: false, final false
  static inline void Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Color color);

  /// @brief Method Write, addr 0x227e1c0, size 0x34, virtual false, abstract: false, final false
  static inline void Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Pose pose);

  /// @brief Method Write, addr 0x227e0a8, size 0x88, virtual false, abstract: false, final false
  static inline void Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Quaternion quaternion);

  /// @brief Method Write, addr 0x227dfd8, size 0x64, virtual false, abstract: false, final false
  static inline void Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Vector3 vector);

  /// @brief Method WriteListOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void WriteListOf(::System::IO::BinaryWriter* binaryWriter, ::System::Collections::Generic::IList_1<T>* list, ::System::Action_2<::System::IO::BinaryWriter*, T>* elementWriter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryReadWriteExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryReadWriteExtensions(BinaryReadWriteExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryReadWriteExtensions(BinaryReadWriteExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BinaryReadWriteExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BinaryReadWriteExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BinaryReadWriteExtensions*, "", "BinaryReadWriteExtensions");
