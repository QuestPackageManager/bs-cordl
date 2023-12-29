#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__MatchmakingCriterionImportance_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Matchmaking)
namespace Oculus::Platform {
struct MatchmakingStatApproach;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResultAndRoom;
}
namespace Oculus::Platform::Models {
class MatchmakingBrowseResult;
}
namespace Oculus::Platform {
class __Matchmaking__CustomQuery;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
namespace Oculus::Platform::Models {
class MatchmakingStats;
}
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class MatchmakingOptions;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __Matchmaking__CustomQuery__Criterion;
}
namespace Oculus::Platform {
struct MatchmakingCriterionImportance;
}
// Forward declare root types
namespace Oculus::Platform {
class Matchmaking;
}
namespace Oculus::Platform {
class __Matchmaking__CustomQuery;
}
namespace GlobalNamespace {
struct __Matchmaking__CustomQuery__Criterion;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Matchmaking);
MARK_REF_PTR_T(::Oculus::Platform::__Matchmaking__CustomQuery);
MARK_VAL_T(::GlobalNamespace::__Matchmaking__CustomQuery__Criterion);
// Type: ::Criterion
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13264))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13379))
// CS Name: ::Matchmaking::CustomQuery::Criterion
struct CORDL_TYPE __Matchmaking__CustomQuery__Criterion {
public:
  // Declarations
  /// @brief Method .ctor addr 0x259e80c size 0x10 virtual false final false
  inline void _ctor(::StringW key_, ::Oculus::Platform::MatchmakingCriterionImportance importance_);

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "importance", ty: "::Oculus::Platform::MatchmakingCriterionImportance", modifiers: "",
  // def_value: None }, CppParam { name: "parameters", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*", modifiers: "", def_value: None }]
  constexpr __Matchmaking__CustomQuery__Criterion(::StringW key, ::Oculus::Platform::MatchmakingCriterionImportance importance,
                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* parameters) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Matchmaking__CustomQuery__Criterion();

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field importance, offset: 0x8, size: 0x4, def value: None
  ::Oculus::Platform::MatchmakingCriterionImportance importance;

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* parameters;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, importance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, parameters) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CustomQuery
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13380))
// CS Name: ::Matchmaking::CustomQuery*
class CORDL_TYPE __Matchmaking__CustomQuery : public ::System::Object {
public:
  // Declarations
  using Criterion = ::GlobalNamespace::__Matchmaking__CustomQuery__Criterion;

  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data;

  /// @brief Field criteria, offset 0x18, size 0x8
  __declspec(property(get = __get_criteria,
                      put = __set_criteria))::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*> criteria;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const& __get_data() const;

  constexpr void __set_data(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  constexpr ::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*>& __get_criteria();

  constexpr ::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*> const& __get_criteria() const;

  constexpr void __set_criteria(::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*> value);

  /// @brief Method ToUnmanaged addr 0x259ced4 size 0x31c virtual false final false
  inline void* ToUnmanaged();

  static inline ::Oculus::Platform::__Matchmaking__CustomQuery* New_ctor();

  /// @brief Method .ctor addr 0x259e804 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Matchmaking__CustomQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Matchmaking__CustomQuery(__Matchmaking__CustomQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Matchmaking__CustomQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Matchmaking__CustomQuery(__Matchmaking__CustomQuery const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Matchmaking__CustomQuery();

public:
  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* ___data;

  /// @brief Field criteria, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*> ___criteria;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__Matchmaking__CustomQuery, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::__Matchmaking__CustomQuery, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::__Matchmaking__CustomQuery, ___criteria) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform
// Type: Oculus.Platform::Matchmaking
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13381))
// CS Name: ::Oculus.Platform::Matchmaking*
class CORDL_TYPE Matchmaking : public ::System::Object {
public:
  // Declarations
  using CustomQuery = ::Oculus::Platform::__Matchmaking__CustomQuery;

  /// @brief Method ReportResultsInsecure addr 0x259c89c size 0x31c virtual false final false
  static inline ::Oculus::Platform::Request* ReportResultsInsecure(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* data);

  /// @brief Method GetStats addr 0x259cbb8 size 0x178 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats*>* GetStats(::StringW pool, uint32_t maxLevel, ::Oculus::Platform::MatchmakingStatApproach approach);

  /// @brief Method Browse addr 0x259cd30 size 0x1a4 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* Browse(::StringW pool, ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData);

  /// @brief Method Browse2 addr 0x259d1f0 size 0x1b0 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* Browse2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);

  /// @brief Method Cancel addr 0x259d3a0 size 0x15c virtual false final false
  static inline ::Oculus::Platform::Request* Cancel(::StringW pool, ::StringW requestHash);

  /// @brief Method Cancel addr 0x259d4fc size 0x144 virtual false final false
  static inline ::Oculus::Platform::Request* Cancel();

  /// @brief Method CreateAndEnqueueRoom addr 0x259d640 size 0x1bc virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates,
                                                                                                                                  ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData);

  /// @brief Method CreateAndEnqueueRoom2 addr 0x259d7fc size 0x1b0 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* CreateAndEnqueueRoom2(::StringW pool,
                                                                                                                                   ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);

  /// @brief Method CreateRoom addr 0x259d9ac size 0x178 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates);

  /// @brief Method CreateRoom2 addr 0x259db24 size 0x1b0 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateRoom2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);

  /// @brief Method Enqueue addr 0x259dcd4 size 0x1a4 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* Enqueue(::StringW pool, ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData);

  /// @brief Method Enqueue2 addr 0x259de78 size 0x1b0 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* Enqueue2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);

  /// @brief Method EnqueueRoom addr 0x259e028 size 0x1a4 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* EnqueueRoom(uint64_t roomID, ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData);

  /// @brief Method EnqueueRoom2 addr 0x259e1cc size 0x1b0 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* EnqueueRoom2(uint64_t roomID, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);

  /// @brief Method GetAdminSnapshot addr 0x259e37c size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>* GetAdminSnapshot();

  /// @brief Method JoinRoom addr 0x259e4d4 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* JoinRoom(uint64_t roomID, bool subscribeToUpdates);

  /// @brief Method StartMatch addr 0x259e644 size 0x14c virtual false final false
  static inline ::Oculus::Platform::Request* StartMatch(uint64_t roomID);

  /// @brief Method SetMatchFoundNotificationCallback addr 0x259e790 size 0x74 virtual false final false
  static inline void SetMatchFoundNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "Matchmaking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Matchmaking(Matchmaking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Matchmaking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Matchmaking(Matchmaking const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Matchmaking();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Matchmaking, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Matchmaking);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Matchmaking*, "Oculus.Platform", "Matchmaking");
NEED_NO_BOX(::Oculus::Platform::__Matchmaking__CustomQuery);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__Matchmaking__CustomQuery*, "Oculus.Platform", "Matchmaking/CustomQuery");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, "Oculus.Platform", "Matchmaking/CustomQuery/Criterion");
