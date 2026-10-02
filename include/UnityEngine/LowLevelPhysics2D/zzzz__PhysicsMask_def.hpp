#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsMask)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsMask_SetBitIterator;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsMask;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsMask_SetBitIterator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsMask);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsMask_SetBitIterator);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsMask, "UnityEngine.LowLevelPhysics2D", "PhysicsMask");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsMask_SetBitIterator, "UnityEngine.LowLevelPhysics2D", "PhysicsMask/SetBitIterator");
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsMask/SetBitIterator
struct CORDL_TYPE PhysicsMask_SetBitIterator {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*();

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<int32_t>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method GetEnumerator, addr 0x6fd4770, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator();

  /// [IsReadOnly]
  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x6fd46e8, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6fd47d0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x6fd4714, size 0x50, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6fd4764, size 0xc, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [IsReadOnly]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6fd46f0, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [IsReadOnly]
  /// @brief Method System.IDisposable.Dispose, addr 0x6fd47d4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method .ctor, addr 0x6fd4514, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LowLevelPhysics2D::PhysicsMask bitMask);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsMask_SetBitIterator();

  // Ctor Parameters [CppParam { name: "m_BitIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bitMask", ty: "uint64_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr PhysicsMask_SetBitIterator(int32_t m_BitIndex, uint64_t bitMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21520 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_BitIndex, offset: 0x0, size: 0x4, def value: None
  int32_t m_BitIndex;

  /// @brief Field bitMask, offset: 0x8, size: 0x8, def value: None
  uint64_t bitMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsMask_SetBitIterator, m_BitIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsMask_SetBitIterator, bitMask) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsMask_SetBitIterator) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsMask
struct CORDL_TYPE PhysicsMask {
public:
  // Declarations
  using SetBitIterator = ::UnityEngine::LowLevelPhysics2D::PhysicsMask_SetBitIterator;

  /// @brief Field All, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_All, put = setStaticF_All)) ::UnityEngine::LowLevelPhysics2D::PhysicsMask All;

  /// @brief Field None, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_None, put = setStaticF_None)) ::UnityEngine::LowLevelPhysics2D::PhysicsMask None;

  /// @brief Field One, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_One, put = setStaticF_One)) ::UnityEngine::LowLevelPhysics2D::PhysicsMask One;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// [IsReadOnly]
  /// @brief Method GetEnumerator, addr 0x6fd44ac, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator();

  /// [IsReadOnly]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6fd4580, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6fd45e8, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsMask getStaticF_All();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsMask getStaticF_None();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsMask getStaticF_One();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Method op_Implicit, addr 0x6fd44a8, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t op_Implicit_uint64_t(::UnityEngine::LowLevelPhysics2D::PhysicsMask bitMask);

  static inline void setStaticF_All(::UnityEngine::LowLevelPhysics2D::PhysicsMask value);

  static inline void setStaticF_None(::UnityEngine::LowLevelPhysics2D::PhysicsMask value);

  static inline void setStaticF_One(::UnityEngine::LowLevelPhysics2D::PhysicsMask value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsMask();

  // Ctor Parameters [CppParam { name: "bitMask", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsMask(uint64_t bitMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21521 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field bitMask, offset: 0x0, size: 0x8, def value: None
  uint64_t bitMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsMask, bitMask) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsMask) == 0x8, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
