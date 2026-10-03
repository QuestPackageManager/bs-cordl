#pragma once
// IWYU pragma private; include "Unity/Audio/Handle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Handle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Audio {
struct Handle_Node;
}
// Forward declare root types
namespace Unity::Audio {
struct Handle;
}
namespace Unity::Audio {
struct Handle_Node;
}
// Write type traits
MARK_VAL_T(::Unity::Audio::Handle);
MARK_VAL_T(::Unity::Audio::Handle_Node);
DEFINE_IL2CPP_CLASS(::Unity::Audio::Handle, "Unity.Audio", "Handle");
DEFINE_IL2CPP_CLASS(::Unity::Audio::Handle_Node, "Unity.Audio", "Handle/Node");
// Dependencies
namespace Unity::Audio {
// Is value type: true
// CS Name: Unity.Audio.Handle/Node
struct CORDL_TYPE Handle_Node {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Handle_Node();

  // Ctor Parameters [CppParam { name: "Next", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Id", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllocationFlags", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Handle_Node(void* Next, int32_t Id, int32_t Version, int32_t AllocationFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20411 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Next, offset: 0x0, size: 0x8, def value: None
  void* Next;

  /// @brief Field Id, offset: 0x8, size: 0x4, def value: None
  int32_t Id;

  /// @brief Field Version, offset: 0xc, size: 0x4, def value: None
  int32_t Version;

  /// @brief Field AllocationFlags, offset: 0x10, size: 0x4, def value: None
  int32_t AllocationFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Audio::Handle_Node, Next) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Audio::Handle_Node, Id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Audio::Handle_Node, Version) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Audio::Handle_Node, AllocationFlags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Audio::Handle_Node) == 0x18, "Size mismatch!");

} // namespace Unity::Audio
// [NativeType(Header = "Modules/Audio/Public/AudioHandle.h")]
// [VisibleToOtherModules(new[] { "UnityEngine.DSPGraphModule" })]
// Dependencies System.IntPtr
namespace Unity::Audio {
// Is value type: true
// CS Name: Unity.Audio.Handle
struct CORDL_TYPE Handle {
public:
  // Declarations
  using Node = ::Unity::Audio::Handle_Node;

  __declspec(property(get = get_AtomicNode)) ::Unity::Audio::Handle_Node* AtomicNode;

  __declspec(property(get = get_Valid)) bool Valid;

  __declspec(property(get = get_ValidAndNotDisposed)) bool ValidAndNotDisposed;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Audio::Handle>"
  constexpr operator ::System::IEquatable_1<::Unity::Audio::Handle>*();

  /// [IsReadOnly]
  /// @brief Method CheckValidOrThrow, addr 0x6eaa7a0, size 0x70, virtual false, abstract: false, final false
  inline void CheckValidOrThrow();

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6eacf14, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6eaafe8, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Audio::Handle other);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6eab8b8, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [IsReadOnly]
  /// @brief Method get_AtomicNode, addr 0x6eacf0c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Audio::Handle_Node* get_AtomicNode();

  /// [IsReadOnly]
  /// @brief Method get_Valid, addr 0x6eaae7c, size 0x24, virtual true, abstract: false, final true
  inline bool get_Valid();

  /// [IsReadOnly]
  /// @brief Method get_ValidAndNotDisposed, addr 0x6eacfa0, size 0x19c, virtual false, abstract: false, final false
  inline bool get_ValidAndNotDisposed();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Audio::Handle>"
  constexpr ::System::IEquatable_1<::Unity::Audio::Handle>* i___System__IEquatable_1___Unity__Audio__Handle_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Handle();

  // Ctor Parameters [CppParam { name: "m_Node", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr Handle(::System::IntPtr m_Node, int32_t Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20412 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [NativeDisableUnsafePtrRestriction]
  /// @brief Field m_Node, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Node;

  /// @brief Field Version, offset: 0x8, size: 0x4, def value: None
  int32_t Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Audio::Handle, m_Node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Audio::Handle, Version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Audio::Handle) == 0x10, "Size mismatch!");

} // namespace Unity::Audio
